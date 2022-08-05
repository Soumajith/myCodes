#include <iostream>
using namespace std;
void multiple(int n){
    cout<<"The table of "<<n<<endl;
    for (int i = n; i <= n*10; i+=n)
    {
        cout<<i<<endl;
    }
    cout<<endl;
}
int main(){
    multiple(2);
    multiple(3);
    multiple(5);

    return 0;
}