#include <stdio.h>
void main() {
    int a, temp, c,r=0;
    printf("enter a number: ");
    scanf("%d", &a);
    temp = a;
    while (a>0)
    {
        c=a%10;
        r=r+c*c*c;
        a=a/10;
    }
    if (temp==r)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not armstrong number");
    }
    
}   