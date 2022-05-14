#include <stdio.h>
#include <complex.h>
#include "DFT.h"

int main(){
    int N;

    printf("Enter the number of samples taken: ");
    scanf("%d", &N);

    double input[N];

    for (int i = 0; i < N; i++){
        printf("Sample %d: ", i+1);
        scanf("%lf", &input[i]);
    }

    complex double out[N];

    dft(N, input, out);

    for (int i = 0; i < N; i++){
        if(cimag(out[i]) >= 0){
            printf("%.1f+%.1fj\n", creal(out[i]), cimag(out[i]));
        }
        else{
            printf("%.1f%.1fj\n", creal(out[i]), cimag(out[i]));
        }
        
    }
}