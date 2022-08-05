#include <bits/stdc++.h>
using namespace std;
void printBinary(int num){
    for (int i = 32; i >= 0; i--)
    {
        cout<<((num>>i) & 1);
    }
    cout<<endl;
}
int main(){
    int a = 9;
    printBinary(a);
    int i = 0;
    if(((1<<i) & a) != 0){
        cout<<"Set Bit"<<endl;;
    }
    else{
        cout<<"Non Set Bit"<<endl;
    }

    //set bit
    printBinary(a | (1<<1));

    //unset bit
    printBinary(a & (~(1<<3)));

    //toggle on/off
    printBinary(a ^ (1<<2));

    //bit count
    int ct = 0;
    for (int i = 31; i >= 0; i--)
    {
        if(((1<<i) & a) != 0) ct++;
    }
    cout<<ct<<endl;
    unsigned int f = 0;
    unsigned int g=31;
    cout<< __builtin_popcount(a)<<endl;
    cout<< __builtin_popcountll((1<<30)-1)<<endl;
    printBinary(1<<31);
    printBinary(((1<<g))-1);
}