#include <bits/stdc++.h>
using namespace std;
void print(int num){
    for (int i = 10; i >=0; i--)
    {
        cout<<((num>>i) & 1);
    }
    cout<<endl;
}
int main(){
    // for (int i = 0; i < 9; i++)
    // {
    //     print(i);
    //     if(i & 1){  //use instead of modulus to find even or odd
    //     cout<<"Odd"<<endl;
    //     } 
    //      else{
    //     cout<<"Even"<<endl;
    //     }
    // }
    // int n=5;
    // cout<<(n>>1)<<endl; //divide
    // cout<<(n<<1)<<endl; //multiply
    // for (char c = 'A'; c <= 'E'; c++)
    // {
    //     cout<<c<<endl;
    //     print(int(c));
    // }
    // for (char c = 'a'; c <= 'e'; c++)
    // {
    //     cout<<c<<endl;
    //     print(int(c));
    // }
    // char A = 'A';
    // char a = (A | (1<<5)); // uppercase to lowercase
    // cout<<a<<endl;
    // cout<<char(a & (~(1<<5)))<<endl; //lower to upppercase
    // (1<<5) = ' '
    // 1011111 = '_'
    //so in short to convert lower to uppercase and vice versa
    // char J = 'J';
    // char j = J | ' ';
    // cout<<j<<endl;
    
    // char k = 'k';
    // char K = k & '_';
    // cout<<K<<endl;

    int a = 59;
    print(a);
    int b = (a & (~((1<<5)-1))); //LSB
    print(b);
    int c = (a & ((1<<4)-1));
    print(c);

    int n = 15;
    if(n & (n-1)){
        cout<<"Not power of 2"<<endl;
    }
    else{
        cout<<"Power of 2"<<endl;
    }
}