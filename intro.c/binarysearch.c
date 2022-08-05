#include <stdio.h>
int binarySearch(int arr[], int n, int k){
    int hi = n-1;
    int lo = 0;
    
    while (hi>=lo)
    {
        int mid = lo+(hi-lo)/2; //to eliminate the overflow of the integer

        if(arr[mid] == k) return mid;

        if(arr[mid] > k) 
            hi = mid-1;
        else
            lo = mid+1;
    }
    
    return -1;
}
int main(){
    int k,n; scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the number to be searched\n");
    scanf("%d",&k);
    int result = binarySearch(arr,n,k);
    (result==-1)?
        printf("The element doesnt exist\n"):
        printf("The element is at %d",result);
}