#include<stdio.h>
int main()
{
    int ar[100],n,i,s,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]>max)
        max=ar[i];
    }
    for(max;max>0;max--)
    {
        for(i=0;i<n;i++)
        {
            if(ar[i]%max!=0)
            {
                s=0;
                break;
            }
            else
            s=1;
        }
        if(s==1)
        {
            printf("%d",max);
            break;
        }
    }
    
}