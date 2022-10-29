#include<stdio.h>
int main()
{
    int x,y,z;
    printf("take a three digit :\n");
    scanf("%d",&x);
    y=x%10;
    z=x/10;
    x=(y*100)+z;
    printf("rotate its number :%d",x);
}