#include <stdio.h>

void main() {
    int i, j, k;
    printf("Enter your values:");
    
    scanf("%d", &i);
    scanf("%d", &j);

    k = i+j;
    printf("The sum of %d and %d is %d ",i,j,k);

}