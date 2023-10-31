#include<stdio.h>
void main() {
    int i, j, k;
    printf("Enter your first value: ");
    scanf("%d", &i);

    printf("Enter your second value: ");
    scanf("%d", &j);

    //addition of numbers
    k = i + j;
    printf("the addition of %d and %d is: %d\n", i, j, k);
    //suntraction of numbers
    k = i - j;
    printf("The subtraction of %d and %d is: %d\n", i, j, k);
    //multiplication of numbers
    k = i * j;
    printf("The multiplications of %d and %d is: %d\n", i, j, k);
    //division of numbers
    k = i / j;
    printf("The division of %d and %d is: %d\n", i, j, k);
    //modulo division of numbers
    k = i % j;
    printf("The modulo division of %d and %d is: %d\n", i, j, k);
}