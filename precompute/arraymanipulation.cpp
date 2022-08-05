#include <bits/stdc++.h>
using namespace std;
/* starting with 1 indexed array of zeros and a list of operations, for each operation add a value to each the array element between two indices, inclusive.  Once all operation have been performed, return the maximum value of the array

constraints - 
3 <= n <= 10^7
1 <= m <= 2*10^5
1 <= a <= b <= n
0 <= k <= 10^9
*/
const int N = 1e7 + 10;
long long int arr[N];

int main(){
    int n,m;
    cin>>n>>m;
    while(m--){
        int a, b, k;
        cin>>a>>b>>k;

        //prefix sum
        arr[a] += k;
        arr[b+1] -= k;

        // for (int i = a; i <= b; i++)
        //     arr[i] += k;

    }
    for (int i = 1; i <= n; i++)
    {
        arr[i] += arr[i-1]; //prefixsum
    }
    
    long long int mx = -1;
    for (int i = 1; i <= n; i++)
    {
        if (mx <= arr[i])
        {
           mx = arr[i];
        }
    }
    // for (int i = 0; i < n; i++){
    //     cout<<arr[i]<<" ";
    // }
    cout<<mx<<endl;   
}

/*1 2 3 4 5 6 7
  0 0 0 0 0 0 0
  to add 2 and 2-4 prefix sum of the array
  add 2 at index 2 and -2 at index to 5
  0 2 0 0-2 0 0 
  so prefix sum will
  0 2 2 2 0 0 0
*/