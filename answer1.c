#include<stdio.h>
int main()
{
    int x;
    printf("enter a number :\n");
    scanf("%d",&x);
    x=x%10;
     printf("unit of digit of number  is %d",x);
return 0;
}