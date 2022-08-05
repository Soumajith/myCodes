//https://leetcode.com/problems/super-pow/

/*
Your task is to calculate ab mod 1337 where a is a positive integer and b is an extremely large positive integer given in the form of an array.
Input: a = 2, b = [3]
Output: 8

Example 2:

Input: a = 2, b = [1,0]
Output: 1024

Example 3:

Input: a = 1, b = [4,3,3,8,5,2]
Output: 1

 

Constraints:

    1 <= a <= 231 - 1
    1 <= b.length <= 2000
    0 <= b[i] <= 9
    b does not contain leading zeros.
*/
#include <bits/stdc++.h>
using namespace std;
const int M = 1337;
int binExp(int a, int b){
    int ans =1;
    while(b){
        if(b&1){
            ans = (ans * 1LL * a) % M;
        }
        a = (a*1LL*a)%M;
        b>>=1;
    }
    return ans;
}
int sumpow(int a, vector<int>&b){
    int m = 190*6; //using euler's law
    int b_n=0;
    for (int i = 0; i < b.size(); i++)
    {
        
        b_n = (b_n*10 + b[i]) %m;
    }
    return b_n;
}
int main(){
    int a,n;
    cin>>a>>n;
    vector<int>b(n);
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    int b_n = sumpow(a,b);
    cout<<b_n<<endl;
    cout<<binExp(a,b_n)<<endl;
}