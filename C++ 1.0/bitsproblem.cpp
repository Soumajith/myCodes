#include <iostream>
using namespace std;

//to check is the number power of 2
bool powerof2(int n){

    return (n && !(n & n-1));//(n & n-1 = 1) and ! = 1; so 1 && n = 1;
}

//to count the numbers of ones in binary representation
int numberofOnes(int n){
    int count = 0;
    while(n>0){
        n = n & (n-1);
        count ++;
    }
    return count;
}

//generate all possible subsets
void subset(int arr[], int n){
    for (int i = 0; i < (1<<n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ( i & (1<<j))
            {
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
    
}

int main(){
    cout<<powerof2(10)<<endl;
    cout<<numberofOnes(15)<<endl;
    int a[4] = {1, 2, 3, 4};
    subset(a, 4);
    return 0;
}