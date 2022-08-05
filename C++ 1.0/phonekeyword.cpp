#include <iostream>
#include <string>
using namespace std;
string phonekey[]={"", "/.","abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv","wxyz"};
void printAll(string s, string ans){
    if (s.length() == 0)
    {
        cout<<ans<<endl;
        return;
    }
    
    char ch = s[0];
    string code = phonekey[ch - '0'];
    string ros = s.substr(1);
    for (int i = 0; i < code.length(); i++)
    {
        printAll(ros, ans+code[i]);
    }
    
}
int main(){
    string s = "23";
    printAll(s, "");

    return 0;
}
