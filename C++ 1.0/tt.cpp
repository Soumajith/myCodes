#include <iostream>
#include <stdio.h>
void update(int *a, int *b){
    int sum = *a + *b;
    int diff = *a-*b;
    if (diff< 0)
    {
        diff*=-1;
    }
    *a = sum;
    *b = diff;
}
int main(){
    int a, b;
    int *ap = &a;
    int *bp = &b;

    scanf("%d %d",&a, &b);
    update(ap, bp);
    printf("%d\n%d", a, b);

    return 0;
}