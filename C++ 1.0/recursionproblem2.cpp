#include <iostream>
#include <string>
using namespace std;
//reverse order oa given string
void reverse(string a){
    if (a.length() == 0)
    {
        return;
    }
    
    string rest = a.substr(1);
    reverse(rest);
    cout<<a[0]<<" ";
}


//turn pixxppiiippxpi to 3.14xxp3.14iippx3.14
void replacePi(string s){
    if (s.length() == 0)
    {
        return;
    }
    
    if (s[0] == 'p' && s[1] == 'i')
    {
        cout<<"3.14";
        replacePi(s.substr(2));
    }
    else
    {
        cout<<s[0];
        replacePi(s.substr(1));
    }
    
}

//tower of Hanoi
void towerofHanoi(int n, char src, char des, char help){

    if (n==0)
    {
        return;
    }
    towerofHanoi(n-1, src, help, des);
    cout<<"Move from "<<src<<" to "<<des<<endl;
    towerofHanoi(n-1, help, des, src);
}

//delete duplicate letters from a word like aaaaaabbbbbbbcddddee = abcde 
string duplicate(string s){
    if (s.length() == 0)
    {
        return "";
    }
    
    if (s[0] == s[1])
    {
        return duplicate(s.substr(1));
    }

    return s[0]+duplicate(s.substr(1));
   
}
//move all x to the end o the word like axxxllbxxhiuxxxjfh to allbhiujfhxxxxxxxx
string xatend(string s){
    if (s.length() == 0)
    {
        return "";
    }
    if (s[0] == 'x')
    {
        return xatend(s.substr(1))+s[0];
    }
    return s[0]+xatend(s.substr(1));
}

//print all possible subarray of a array
void printAll(string s, string ans){
    if (s.length() == 0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch = s[0]; 
    printAll(s.substr(1), ans);
    printAll(s.substr(1), ans+ch);
    
}

//print all possible with ASCII number
void mix(string s, string ans){
    if (s.length() == 0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    int ch2 = ch;
    mix(s.substr(1), ans);
    mix(s.substr(1), ans+ch);
    mix(s.substr(1), ans+ to_string(ch2));

}
int main(){

    // string a = "BINOD";
    // reverse(a);
    // cout<<endl;
    // string s ={"pixxppiiippxpi"};
    // replacePi(s);
    // towerofHanoi(3, 'A', 'C', 'B');
    // cout<<duplicate("aaaaaabbbbbbbcddddee")<<endl;
    // cout<<xatend("axxxllbxxhiuxxxjfh");
    // string s = "ABC";
    // printAll(s, "");
    mix("AB", "");

    return 0;
}