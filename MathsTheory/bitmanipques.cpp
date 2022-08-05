//https://www.hackerearth.com/problem/algorithm/monk-and-his-father-93b639f4/
//MONK AND FATHER AND PIGGY BANK
/*he needs p rupees, he starts from zero, he goes to God of money to keep in piggy, at the end father doubles the piggy
so formula
1st day = 2*x1
2nd = 2(2x1 + x2) = 4x1 +2x2
3rd = 2(4x1+2x2+x3)= 8x1+ 4x2 + 2x3
4th = 2(8x1 + 4x2+ 2x3 + x4); = 16x1 + +8x2 + 4x3 + 2x4; 
so it is represents the binary to decimal system so x can be either 1 or 0 so we need to count just the setbit
as the nummber of days can be as many
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<__builtin_popcountll(n)<<endl;
    }
}