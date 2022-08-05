#include <bits/stdc++.h>
using namespace std;
void printV(vector<int> &v){
    cout<<"Size: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }    
    cout<<endl;
}
int main(){
    vector<int>v[10];
    int N;
    cin>>N;
    for (int i = 0; i < N; i++)        //input of Array of VEctors
    {
        int n;
        cin>>n;
        for (int j = 0; j < n; j++)       
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }    
    for (int i = 0; i < N; i++)
    {
        printV(v[i]);
    }
    
}