#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;
    multimap<string,string>m;
    multimap<string,string>res;
    while(q--){
        int n;
        cin>>n;
        for (int i = 1; i <= n; i++)
        {
            string fn,ln;
            cin>>fn>>ln;
            m.insert(make_pair(fn,ln));
        }
        for(auto it = m.begin(); it!= m.end(); it++){
            for (auto itc = m.begin()++; itc!= m.end(); itc++)
            {
               
            
            if(itc->first == it->first && itc->second != it->second ){
                // cout<<itc->first<<" "<<itc->second<<endl;
                // cout<<it->first<<" "<<it->second<<endl;
                res.insert({itc->first," "});
                itc++;
            }
            // else{
            //     cout<<it->first<<endl;
            // }
        }
        }
        // cout<<m.size()<<endl;
        // for (auto &pr : m)  
        // {
        //    cout<<pr.first<<endl;
        // }
        auto itc = res.begin();
        for (auto it = m.begin(); it != m.end(); it++)
        {
            if(itc->first == it->first){
                cout<<it->first<<" "<<it->second<<endl;
                itc++;
            }
            else{
                cout<<it->first<<endl;
            }
        }
        
    }
    
}