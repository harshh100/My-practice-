#include <stdio.h>
#include "cal.h"
int main()
{
    int num1, num2;

    printf("Enter num 1 : ");
    scanf("%d", &num1);

    printf("Enter num 2 : ");
    scanf("%d", &num2);

    printf(" Addition : %d\n Subtraction : %d\n Devide : %d\n Multiplication : %d", addition(num1, num2), subtraction(num1, num2), devide(num1, num2), multiplication(num1, num2));
}