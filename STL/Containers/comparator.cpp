#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b){
    if(a.first!=b.first){
        return a.first<b.first;  //write what you want the order to be as the result will be opposite to what you return so it is the best method to write what order you want the pogram to be
    }
    else{
        return a.second>b.second;
    }
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),cmp); //comparator recieves the opposite of the bool value 
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i+1; j < n; j++)
    //     {
    //         if(should_i_swap(v[i],v[j]))
    //         swap(v[i],v[j]);
    //     }
    // }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}