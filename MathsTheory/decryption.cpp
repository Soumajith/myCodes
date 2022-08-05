//https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-2/practice-problems/algorithm/hacker-with-prime-bebe28ac///
#include <bits/stdc++.h>
using namespace std;
const int N = 2e6+10;
int hsh[N];
int isRemove[N];
int hi[N];

vector<int> distinctPf(int x){
    vector<int>ans;
    while(x>1){
        int pf = hi[x];
        while(x%pf == 0) x/=pf;
        ans.push_back(pf);
    }
    return ans;
}
int main(){
    int n, q;
    cin>>n>>q;
    //sieve algo
    for (int i = 2; i < N; i++)
    {
        if(hi[i] ==0){
            for (int j = i; j < N; j+=i)
            {
                hi[j] = i; //primefactorisation using highest prime factor
            }
        }
    }
    //input and counting of the number to 1
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x; hsh[x] = 1;   
    }
    
    
    

    for (int i = 2; i < N; i++)
    {
        if(hsh[i]){
            for (long long j = i; j < N; j*= i)
            {
                isRemove[j] = 1;
            }
        }
    }
    
    while(q--){
        int x; cin>>x;
        vector<int>pf = distinctPf(x);
        bool isPossible = false;
        for (int i = 0; i < pf.size(); i++){
            for (int j = i; j < pf.size(); j++){
                int product = pf[i]*pf[j];
                if(i == j && x%product != 0) continue; // to skip one iteration
                int toRemove = x/product;
                if(isRemove[toRemove] == 1 || toRemove == 1){
                    isPossible = true;
                    break;
                    
                }
            }
            if(isPossible) break; //for outer loop break;
        }
        // cout<<(isPossible? "Yes\n" : "No\n");
        if(isPossible){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    
}