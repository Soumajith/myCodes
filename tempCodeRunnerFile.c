#include<stdio.h>
int main()
{
    int n,x,sum,p;
    printf("the armstrong numbers are :\n");

    for(n=1 ; n<=1000 ; n++)
    {
        x=n;
        sum=0;
        while(x!=0)
        {
            p=x%10;
            sum=sum+(p*p*p);
            x=x/10;

        }
        if(sum==n)
        {
            printf("%d\n",n);
        }
    }

return 0;
}