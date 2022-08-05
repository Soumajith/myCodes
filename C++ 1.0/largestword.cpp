#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    cin.ignore();
    char arr[n+1];
    cin.getline(arr, n);
    cin.ignore(); //flush function can also be used

    int max = 0, curr = 0;
    int i = 0;
    int st, end = 0;

    while(1){
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (curr>max)
            {
                max=curr;
                end = st;
                
            }
            st=i+1;
            curr=0;
        }
        else
        curr++;
            if (arr[i] == '\0')
               
             break;
        
        i++;
    }
    cout<<max<<endl;

    for (int i = 0; i < max; i++)
    {
        cout<<arr[i+end];
    }
    

    return 0;
}