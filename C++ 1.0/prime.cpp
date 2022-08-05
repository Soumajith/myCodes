#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    cin>>a;
    bool b;
    for (int i = 2; i < sqrt(a); i++)
    {
        if(a%i==0){
            b=1;
            cout<<"non prime";
            break;
        }
    }
    if (b==0)
    {
        cout<<"prime";
    }
    
    
}