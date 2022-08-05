#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int o= n;
   
    float r=0;
    while (n>0)
    {
        int s=n%10;
        r+= pow(s,3);
        n=n/10;
        cout<<r<<endl;
        
    }
    
    if(r==o){
        cout<<"armstrong number";
    }
    else{
        cout<<"it is not";
    }
    
}