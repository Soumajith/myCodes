#include <bits/stdc++.h>
using namespace std;
int BinaryAdd(int a, int b){
    int sum = 0;
    int carry = 0;
    while (a>o && b>0)
    {
        if (a%2==0 && b%2==0)
        {
            sum = sum*10 + carry;
            carry = 0; 
        }
        else if (a%2==0 && b%2==1 || a%2==1 && b%2==0)
        {
            if (carry==1)
            {
                sum = sum*10 + 0;
                carry = 1;
            }
            else
            {
                sum = sum*10 + 1;
                carry = 0;
            }
        }
        else{
            sum = sum*10 + carry;
            carry = 1;
        }
        a/= 10;
        b/=10;


        
    }
    
}
int main(){
    int a, b;
    cin>>a>>b;
    cout<<BinaryAdd(a, b)<<endl;
}