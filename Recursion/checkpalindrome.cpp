#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string str, int low, int high){
    while(low<=high){
        if(str[high] != str[low]) return false;
        low++;
        high--;
    }
    return true;
}
int main(){
    string s = "nitin";
    if(isPalindrome(s,0,s.length()-1)) cout<<"Palindrome"<<endl;
    else cout<<"No palindrome"<<endl;
    
}