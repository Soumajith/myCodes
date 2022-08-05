//https://www.hackerearth.com/problem/algorithm/the-three-musketeers-6efd5f2d/
#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c){ //vowel check
    return  c=='a' || c=='e' || c=='i'|| c=='o' || c=='u';
}
vector<string> subset(string s){ //subsset generation using bit mask
    int sz = 1<<s.length();
    vector<string>ans;
    for (int mask = 0; mask < sz; mask++)
    {
        string subsets;
        for (int i = 0; i < s.length(); i++)
        {
            if(mask & (1<<i)) subsets.push_back(s[i]);
        }
        if(subsets.size()) ans.push_back(subsets);
    }
    return ans;
}
int main(){
    int t; 
    cin>>t;
    while(t--){
        int n; cin>>n;
        string s[n];
        for(int i = 0; i<n; ++i){
            cin>>s[i];
        }

        unordered_map<string,int> hsh;
        for (int i = 0; i < n; i++)
        {
            set<char>distinct_vw;
            for(auto ch : s[i]){
                if(isVowel(ch)){
                    distinct_vw.insert(ch); //stores vowel character
                }
            }
            string s_vw;
            for(auto ch : distinct_vw){
                s_vw.push_back(ch); //stores string of vowels
            }
            vector<string>subsets_vw = subset(s_vw); //creates subset of the string
            for(auto sets : subsets_vw){
                hsh[sets]++; //adds count to the vowel subset
            }
        }
        // for(auto pr : hsh){
        //     cout<<pr.first<<" "<<pr.second<<endl;
        // }
        long long ans = 0;
        for(auto pr : hsh){
            if(pr.second < 3) continue; //if count less than 3 skip iteration
            long long ct = pr.second;
            long long ways =( ct * (ct-1) * (ct-2))/6; //nCr
            if(pr.first.size() % 2 == 0) ans -= ways;  //inclusive and exclusive
            else ans+=ways;
        }
        cout<<ans<<endl;
    }
}