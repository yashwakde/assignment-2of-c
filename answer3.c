#include<stdio.h>
int main()
{
    int x,y,z;
    printf( "enter a number :\n ");
    scanf("%d %d",&x,&y);
    z=x;
    x=y;
    y=z;
     printf("swap value of x is %d\n" ,x);
     printf("swap value of y is %d\n",y);

    return 0;


}
    