#include <iostream>
using namespace std;
int main(){
    for (int i = 0; i < 7; i++)
    {
        int space;
        space = 1*i;
        for (int j = 7; j>i; j--)
        {
            cout<<" ";
        }
        for (int k = 1; k < i; k++)
        {
            cout<<k<<" ";
        }
        
            
            
            cout<<endl;

    }
    
}
