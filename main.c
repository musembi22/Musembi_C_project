#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int a,b,c ,d ;
    printf("Enter the first value :");
    scanf("%e" ,&a);
    printf("Enter the second value:");
    scanf("%e" ,&b);
    printf("Enter the third value:");
    scanf("%e",&c);
    d = a + b + c;
    printf("%d + %d +%d = %d\n" , a , b ,c , d);

    return 0 ;
}
