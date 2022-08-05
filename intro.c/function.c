#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int m = n;
    for (int i = 1; i <= n; i++)
    {
        int s =1;
        for (int j = 1; j <= m - 1; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("%d",s++);
        }
        m--;
        printf("\n");
    }
}