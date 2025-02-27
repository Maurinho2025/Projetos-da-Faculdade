#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "en_US.UTF-8");

    int num = 10;
    float result = 10.0; 

    int comparison = (float)num == result;
    
    printf("num == result: %d\n", comparison);

    return 0;
}