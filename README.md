This is a simple script that calculates the descrete Fourier transform complex coefficient vector from an input list of values.

To use this program, enter 'make' into the command line in the working directory and run './main'.
Enter sampled data in order as prompted.

This algorithm runs in O(n^2) where n is the number of samples. This is not an ideal complexity for large sets of data. Implementing the Cooley-Tukey FFT would be ideal.