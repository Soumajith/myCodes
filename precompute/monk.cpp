#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
	string s;
	cin>>s;
	int ans=0;
	for(int i=0; i<s.length(); i++){
		char c = s[i];
		int ic = (int)c; //ASCII values
		if(ic>97){
			ic -=32;
			c = (char)ic;
			ans += ic;
		}
		else{
			ic+=32;
			c = (char)ic;
			ans -= ic;
		}
	}
    cout<<ans<<" ";
	cout<<isPrime(ans)<<endl;
}
