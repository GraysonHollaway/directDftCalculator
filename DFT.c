#include "DFT.h"

void dft(int N, double input[], complex double output[]){
    complex double dft_matrix[N][N];

    //populate dft matrix based on sum(exp(-j*2*pi*k*n/N))

    for (int k = 0; k < N; k++){
        for (int n = 0; n < N; n++){
            complex double arg = 2 * M_PI * k * n / N;
            dft_matrix[k][n] = cos(arg) - I * sin(arg);
        }
    }

    // for(int i = 0; i < N; i++){
    //     for(int j = 0; j < N; j++){
    //         printf("%.1f+%.1fj ", creal(dft_matrix[i][j]), cimag(dft_matrix[i][j]));
    //     }
    //     printf("\n");
    // }

    //compute output vector with matrix-vector multiplication

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            output[i] += dft_matrix[i][j] * input[j];
        }
    }
}