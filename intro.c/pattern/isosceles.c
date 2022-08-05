#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int m = n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m - 1; j++)
        {
            printf(" ");
        }
        int a = 1;
        int b = i;
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if(a<=i)
             printf("%d",a++);
            else 
             printf("%d",--b);
        }
        m--;
        printf("\n");
    }
    
}