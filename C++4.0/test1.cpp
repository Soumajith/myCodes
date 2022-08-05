#include <bits/stdc++.h>
using namespace std;
void greatest(int *a, int *b, int *c){
    if (*a>*b && *a>*c)
    {
        cout<<*a<<endl;
    }
    else if (*b>*a && *b>*c)
    {
        cout<<*b<<endl;
    }
    else
    {
        cout<<*c<<endl;
    }
}
void smallest(int *a, int *b, int *c){
    if (*a<*b && *a<*c)
    {
        cout<<*a<<endl;
    }
    else if (*b<*a && *b<*c)
    {
        cout<<*b<<endl;
    }
    else
    {
        cout<<*c<<endl;
    }
}
int main(){
    int x, y, z;
    cin>>x>>y>>z;
    int *a = &x;
    int *b = &y;
    int *c = &z;
    greatest(a, b, c);
    smallest(a, b, c);
    return 0;

}