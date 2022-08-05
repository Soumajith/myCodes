#include <iostream>
using namespace std;
int fact(int j){
    int facto=1;
    for (int  i = 1; i <=j; i++)
    {
        facto*=i;
    }
    return facto;
    
}
int main(){
    int n;
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int c = fact(i)/(fact(i-j)*fact(j));
            cout<<c;
        }
        
        cout<<endl;
    }
    
    

}