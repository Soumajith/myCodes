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
    vector<vector<int>>v;
    int N;
    cin>>N;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin>>n;
        vector<int>temp;           //we are using a temporary vector to input a vector of vector
        for (int j = 0; j < n; j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);         //as it is a vector of vector so it can directly input a vector
    }
    v.push_back(vector<int> ());
    for (int i = 0; i < v.size(); i++)
    {
        printV(v[i]);
    }
    
}