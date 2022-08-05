#include <iostream>
using namespace std;

//one unique number in set
int xorpb(int arr[], int n){
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum^arr[i];
    }
    return xorsum;
}
//two unique number in a set
int setBit(int n, int pos){
    return (n & (1<<pos) != 0);
}
void uniqueset(int arr[], int n){
    int xorsum=0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum^arr[i];
    }
    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;
    while(setbit !=1){
        setbit = xorsum & 1;
        pos++;
        xorsum =  xorsum >> 1;
    }
    int newxor = 0;
    for (int i = 0; i < n; i++)
    {
        if (setBit(arr[i], pos-1))
        {
            newxor = newxor^arr[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;

}
int main(){
    int arr[7] = {1,2,4,3,3,2,1};
    int ar[6] = {1,2,1,2,6,7};
    
    cout<<xorpb(arr, 7)<<endl;
    uniqueset(ar, 6);
    return 0;
}