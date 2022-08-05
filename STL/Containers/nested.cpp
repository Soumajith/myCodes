#include <bits/stdc++.h>
using namespace std;
int main(){
    map<pair<string,string>,vector<int>>m;
    int n;
    cin>>n;
    for(int i =0; i<n; i++){
        string fn, ln;
        int sub;
        cin>>fn>>ln>>sub;
        for (int j = 0; j < sub; j++)
        {
            int mark;
            cin>>mark;
            m[{fn,ln}].push_back(mark);    //as it is vector 
        }
    }
        for (auto &pr : m)
        {
            auto &full_n = pr.first;
            auto &x = pr.second;
            cout<<full_n.first<<" "<<full_n.second<<endl;
            cout<<x.size()<<endl;
            for (auto &v : x)
            {
                cout<<v<<" ";
            }
            cout<<endl;
        }
        
    
}