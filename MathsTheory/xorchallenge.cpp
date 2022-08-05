//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/xor-challenge-2420f189/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int c; cin>>c;
    int bit_ct = log2(c)+1; //formula for bit count and __builtin_popcountll() for set bit count
    int a = 0, b=0;
    vector<int>setbits;
    for (int i = 0; i < bit_ct; i++)
    {
        if(c & (1<<i)){
            setbits.push_back(i); //checks which are set
        }
        else{
            a = a|(1<<i);
            b = b|(1<<i);
        }
    }
    int size = 1<<setbits.size(); //for bitmask loop
    long long ans = -1;
    for (int mask = 0; mask < size; mask++)
    {
        int a_copy = a, b_copy = b;
        for (int j = 0; j < setbits.size(); j++)
        {
            if(mask & (1<<j)){
                a_copy |= (1<<setbits[j]); //setting
            }
            else{
                b_copy |= (1<<setbits[j]);//setting
            }
        }
        ans = max(ans, (a_copy * 1LL * b_copy));        
    }
    cout<<ans<<endl;
}