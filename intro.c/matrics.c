#include <stdio.h>
void input(int m, int n, int arr[][n]){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
}

void print(int m, int n, int arr[][n]){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
// void add(int m, int n, int arr1[][n], int arr2[][n]){
//     int arr_res[m][n];
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             arr_res[i][j] = arr1[i][j] + arr2[i][j];
//         }
//         printf("\n");
//     }
// }


int main(){
    int m,n,a,b;
    scanf ("%d %d %d %d", &m, &n, &a, &b);
    int arr1[m][n], arr2[a][b];
    input(m,n,arr1);
    input(a,b,arr2);
    //ADDITION
    // if (m!=a || n!=b);
    // {
    //     printf ("the matrix should have same order\n");
    //     return 0;
    // }
    
    //MULTIPLY

    int arr_res[m][b];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k <n; k++)
            {
                arr_res[i][j] += (arr1[i][k]*arr2[k][j]);
            }            
        }
    }//
    print(m,b, arr_res);
    

}