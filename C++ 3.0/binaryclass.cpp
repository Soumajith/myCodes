#include <bits/stdc++.h>
using namespace std;
class binary
{
public:
    string s;
    void read(void);
    void check(void);
    void ones(void);
    void display(void);
};

void binary :: read(){
    cout<<"Enter the number: "<<endl;
    cin>>s;
}
void binary :: check(){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!= '1' && s.at(i)!= '0')
        {
            cout<<"Not a binary"<<endl;
            exit(0);
        }
    }
}
void binary :: ones(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else{
            s.at(i) = '1';
        }
    }
}

void binary:: display(){
    cout<<"The changed number is: "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main(){
    
    binary b;
    b.read();
    b.check();
    b.ones();
    b.display();
    return 0;
}