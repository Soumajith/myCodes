#include <stdio.h>
int Lucky(int n){
    int arr[11];
    for (int i = 0; i <= 10; i++)
    {
        arr[i] = 0;
    }
    
    int digit;
    while(n>0){
        digit = n%10;

        if(arr[digit]) return 0;

        else arr[digit] = 1;

        n/=10;
    }
    return 1;
}
int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        (Lucky(arr[i]))? 
            printf("This is a lucky number\n"): 
            printf("This not a lucky number\n");
    }
    
}