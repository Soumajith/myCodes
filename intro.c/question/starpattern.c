#include <stdio.h>
void parry(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void merge(int A[], int mid, int low, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}
void mSort(int A[], int low, int high){
    int mid; 
    if(low<high){
        mid = (low + high) /2;
        mSort(A, low, mid);
        mSort(A, mid+1, high);
        merge(A, mid, low, high);
    }
}
int main()
{
    int k,t;
    printf("Enter no of elements: ");
    scanf("%d",&t);
    int A[t];
    printf("Enter array elements: ");
    for (k=0;k<t;k++){
        scanf("%d",&A[k]);
    }
    
    mSort(A, 0, t-1);
    parry(A, t);
    return 0;
}