#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a=1,b=1,i=1,c;
    printf("%d ",a);
    printf("%d ",b);
    while(i<n)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        i++;
    }
}