#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;
    while(q--){
        double a, b, c;
        cin>>a>>b>>c;
        // int hex = trunc(a);
        
        // cout<<"0x"<<DecimalToHexadecimal(hex)<<endl;
        
        cout<<hex<<showbase<<nouppercase;
        cout<<(long long)a<<endl;
        cout<<dec<<right<<setw(15)<<setfill('_')<<showpos<<fixed<<setprecision(2);
        cout<<b<<endl;
        cout<<setprecision(9)<<noshowpos<<uppercase<<scientific<<c<<endl;
        
    }
    
}