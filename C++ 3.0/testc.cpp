#include <bits/stdc++.h>
#include <string>
using namespace std;
int Binaryto(int m)
{
    int j;
    int i = 0;
    int sum = 0;
    while (m > 0)
    {
        j = m % 10;
        sum += j * pow(2, i);
        m = m / 10;
        i += 1;
    }
    return sum;
}
int main(){
	int t;
    cin>>t;
	while(t--){
	int n;
	cin>>n;
    string s;
    
	getline(cin, s);
	
    int m = stoi(s);
    cout<<m<<endl;
    // int k = 0;

    // for (int i = 0; i < n; i++){
    // k = 10 * k + a[i];
    // }
    // cout<<Binaryto(k);
}
}
