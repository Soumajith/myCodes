#include<stdio.h>
int main()
{
    int i,j;
    char a[100];
    printf("enter the string : ");
    gets(a);

    for(i=0 ; a[i]!='\0' ; i++)
    {
        if(a[i]==a[i+1])
        {
            for(j=i ; a[j]!='\0' ; j++)
            {
                a[j]=a[j+1];
            }
        i--;
        }
    }
    puts(a);



return 0;
}