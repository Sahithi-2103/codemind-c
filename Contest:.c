#include<stdio.h>
int main()
{
    int a=1,n,b=2,x,e,h;
    scanf("%d%d%d",&x,&e,&h);
    n=e*a+h*b;
    if(n>=x)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}