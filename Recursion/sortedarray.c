#include <stdio.h>
int isSorted(int arr[], int n){
    if(n == 1) return 1;

    return (arr[n-1]<arr[n-2])?0:isSorted(arr,n-1);
}
int main(){
    int arr[5] = {0,1,3,5,8}; 
    if(isSorted(arr,5)) printf("TRUE\n");
    else printf("False\n");
}