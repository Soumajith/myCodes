#include <stdio.h>
int main(){
    int a,b,x,y;
    scanf("%d %d %d %d",&a,&b,&x,&y);
    int cost = a*x + b*y;
    printf("%d", cost);
}