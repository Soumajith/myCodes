#include <iostream>
#include <string>
using namespace std;

//to prirnt all possible combination of element
void permutation(string s, string ans){
    if (s.length() == 0)
    {
        cout<<ans<<endl;
        return;
    }
    
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string ros = s.substr(0,i)+s.substr(i+1);

        permutation(ros, ans+ch);
    }
}    
//from start to end write all possibilities of it with the help of dice(6)
int countpath(int st, int en){
    if (st == en)
    {
        return 1;
    }
    if (st > en)
    {
        return 0;
    }
    int count = 0;
    for (int i = 1; i <= 6; i++)
    {
        count += countpath(st+i, en);
    }
    return count;
}
//number of paths in a n x n maze only moving in x direction and y direction
int countpathmaze(int n, int i, int j){
    if (i == n-1 && j == n-1)
    {
        return 1;
    }
    if (i >= n || j>= n)
    {
        return 0;
    }
    
    return countpathmaze(n, i+1, j) + countpathmaze(n, i, j+1);
}

int main(){
    // permutation("ABC", "")<<endl;
    cout<<countpath(0, 3)<<endl;
    cout<<countpathmaze(3, 0, 0)<<endl;
    return 0;
}