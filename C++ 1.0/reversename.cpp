#include <iostream>
#include <string>
using namespace std;
//incomplete 

//reverse order or given string
void reverse(string a){
    if (a.length() == 0)
    {
        return;
    }
    
    string rest = a.substr(1);
    
    reverse(rest);
    cout<<a[0]<<" ";
}

int main(){
    string s = "I love c++";
    
    reverse(s);
    return 0;
    
}