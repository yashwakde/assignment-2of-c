#include<stdio.h>
int main()
{
    int x;
    printf("enter a number :\n");
    scanf("%d",&x);
    (x&1)?printf("odd"):printf("even");
    return 0;
}