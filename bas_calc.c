#include <stdio.h>
#include <stdlib.h>

int main() 
{
    double n1, n2;
    printf("Enter first number: ");
    scanf("%lf", &n1);
    printf("Enter second number: ");
    scanf("%lf", &n2);
    
    printf("Answer: %f", n1+n2);
    
    return 0;
}