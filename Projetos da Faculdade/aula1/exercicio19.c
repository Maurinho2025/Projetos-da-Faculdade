#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "en_US.UTF-8");

    double preciseNumber = 3.141592653589793;
    long double veryPreciseNumber = 3.14159265358979323846;

    printf("Número preciso (double): %.15f\n", preciseNumber);
    printf("Número muito preciso (long double): %.21Lf\n", veryPreciseNumber);

    return 0;

}

