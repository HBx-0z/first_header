#include <stdio.h>
#include "math_header.h"

int main() {

    double num1 = 10.0, num2 = 5.0;

    printf("Toplam: %f\n", add(num1, num2));
    printf("Fark: %f\n", subtract(num1, num2));
    printf("Carpim: %f\n", multiply(num1, num2));
    printf("Bölüm: %f\n", divide(num1, num2));

    return 0;

}