#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char colors[20];
    char plural_noun[20];
    char celebrityF[20];
    char celebrityL[20];
    
    printf("Enter a color: ");
    scanf("%s", colors);
    printf("Enter a plural noun: ");
    scanf("%s", plural_noun);
    printf("Enter your favorite celebrity: ");
    scanf("%s%s", celebrityF, celebrityL);
    
    printf("Roses are %s\n", colors);
    printf("%s are blue\n", plural_noun);
    printf("I love %s %s\n", celebrityF, celebrityL);
    
    
    
    return 0;
}