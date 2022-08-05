#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a,b;
        scanf("%d %d", &a, &b);
        int gcd;
        for (int i = 1; i <= a && i<= b; i++)
        {
            if(a%i == 0 && b%i ==0){
                gcd = i;
            }
        }
        printf("%d ",gcd);
        int lcm = (a/gcd)*b;
        printf("%d ",lcm);
        printf("\n");
    }
    return 0;
}