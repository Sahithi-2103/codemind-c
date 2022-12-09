#include<stdio.h>
int main()
{
    float b,hra,da,pf,gross;
    scanf("%f%f%f",&b,&hra,&da);
    pf=(b*12)/100;
    gross=b+da+hra+pf;
    printf("%0.2f
%0.2f",pf,gross);
}