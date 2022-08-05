#include <bits/stdc++.h>
using namespace std;
int main(){
    pair<int, string> p;
    // p = make_pair(2, "ABC");
    pair<int,string> &p1 = p;     //copy of the pair is formed O(n) toe avoid &p1 can be used
    p1.first = 3;
    p1.second = "WER";
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,int>p_arr[3];
    p_arr[0] = {1,2};
    p_arr[1] = {6,3};
    p_arr[2] = {7,3};
    swap(p_arr[1], p_arr[2]);
    for (int i = 0; i < 3; i++)
    {
        cout<<p_arr[i].first<<" "<<p_arr[i].second<<endl;
    }
    
}