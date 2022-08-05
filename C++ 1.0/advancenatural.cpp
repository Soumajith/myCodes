#include <iostream>
using namespace std;
int sum(int j){
    int sumn = 1;
    for (int i = 2; i <= j; i++)
    {
        sumn+=i;
        
    }
    return sumn;
    

}
int main(){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;

    return 0;

}