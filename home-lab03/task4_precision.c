#include <stdio.h>

int main(){

    double pi = 3.14159265358;

    printf("pi with 2 digits precision : \t%.2f\n",pi);
    printf("pi with 4 digits precision : \t%.4f\n", pi);
    printf("pi with 6 digits precision : \t%.6f\n", pi);
    printf("pi with 10 digits precision : \t%.10f\n", pi);

    return 0;
}
