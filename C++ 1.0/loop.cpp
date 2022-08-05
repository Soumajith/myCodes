#include <iostream>
using namespace std;
int main(){
    int c, i;
    cin>>c;
    for (i = 2; i < c; i++)
    {
        if (c%i==0)
        {
            cout<<"this is not a prime no."<<endl;
            break;
        }


    }
    if (i==c)
    {
        cout<<"prime";
    }
    
    
    return 0;
}