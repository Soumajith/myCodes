#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    //all of these are O(n) and for maps and sets it is O(logn) using .find .accumulate
    auto min = min_element(v.begin(),v.end());  //it returns a pointer so star is used;
    cout<<(*min)<<endl;
    int max = *max_element(v.begin(),v.end());
    cout<<max<<endl;
    int sum =  accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;
    int ct = count(v.begin(), v.end(), 6);
    cout<<ct<<endl;
    auto element = find(v.begin(),v.end(),0);
    if(element == v.end()){
        cout<<"NOT FOUND"<<endl;
    }
    else{
        cout<<(*element)<<endl;
    }
    reverse(v.begin(),v.end());
    for (auto val: v)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    //for string
    string s = "soumajith";
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}