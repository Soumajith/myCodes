#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {2,3,5,7,8};
    vector<int> :: iterator it;
    for (it = v.begin(); it != v.end(); it++)       //it++ is use instead of it+1; it++ moves to next iterator and it+1 moves to next location so in discontinuous STL like maps and sets it gives and error so use ++it; 
    {
        cout<<*it<<" ";
    }
    it = v.begin();
    cout<<"\n"<<*(it+4)<<endl;

    //iterator for vector pair
    vector<pair<int, int>>v_p = {{1,2},{3,4},{6,7}};
    vector<pair<int,int>> :: iterator itp;
    for (itp = v_p.begin(); itp != v_p.end() ; itp++)
    {
        cout<<(itp->first)<<" "<<(itp->second)<<endl;         //better to use for no reason
        // cout<<(*itp).first<<" "<<(*itp).second<<endl;
    }
    
}