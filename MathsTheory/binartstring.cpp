#include <bits/stdc++.h>
using namespace std;
vector<int>binary1;
bool check(int sum){
    if (sum<=1){
        return false;
    }
    for (int i = 2; i < sum; i++)
    {
        if(sum%i == 0) return false;
    }
    return true;
}
void binary(vector<int>&v){
    int n = v.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i]*pow(2,i);
        // cout<<sum<<endl;
    }
    binary1.push_back(sum);
    // cout<<sum<<endl;
}
void generate(vector<int>&subset, int i , vector<int>&v){

    if(i == v.size()){
        binary(subset);
        for(auto &val : subset){
            cout<<val<<" ";
        }
        cout<<endl;
        return;
    }
    //for empty entry
    generate(subset,i+1,v);

    //for num entry
    subset.push_back(v[i]);
    generate(subset,i+1,v);
    subset.pop_back();
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
    cin>>s;
    int n = s.length();
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        string x = s.substr(i,1);
        int y = stoi(x);
        // cout<<y<<endl;
        v.push_back(y);
    }
    vector<int>empty;
    generate(empty,0,v);
    int ch = 0;
    for (int i = 0; i < binary1.size(); i++)
    {
        if(check(binary1[i])){
            // cout<<"Yes"<<endl;
            ch =1;
            break;
        }
    }
    if(ch==1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    }
    
}
