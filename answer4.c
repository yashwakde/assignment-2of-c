#include<stdio.h>
int main()
{
    int a=4,b=5;
    printf("enter a number:\n");
    scanf("%d %d",&a,&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("swap value of x is %d",a);
   printf("swap value of y is %d ",b);
    return 0;
}