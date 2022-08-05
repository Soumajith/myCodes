#include <bits/stdc++.h>
using namespace std;

//to check if its palindrome
bool isPalindrome(string str, int low, int high){
    while(low<=high){
        if(str[high] != str[low]) return false;
        low++;
        high--;
    }
    return true;
}

//recursive function to find all the palindrome partition
void allPalPartUtil(vector<vector<string>>&allPart, vector<string> &currpart, int pos, int n, string str){
    if(pos == n){
        allPart.push_back(currpart);
        return;
    }
    for (int i = pos; i < n; i++)
    {
        if(isPalindrome(str, i, n)){
            currpart.push_back(str.substr(pos,i-pos-1));

            allPalPartUtil(allPart, currpart, i+1, n, str);
            
            currpart.pop_back();
        }
    }
}

//function to print all possible partitions
void allPalPartition(string str){
    int n = str.length();

    vector<vector<string>> allPart; //to store all the part

    vector<string>currPart;

    allPalPartUtil(allPart, currPart, 0, n, str);

    for(auto par : allPart){
        for(auto pars : par)
            cout<<pars<<" ";
        
        cout<<endl;
    }
}

//driver code
int main(){
    string s; cin>>s;
    allPalPartition(s);
}