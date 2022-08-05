#include <iostream>
#include <vector>
using namespace std;
//introduction of vectors
int main(){

    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" "; // 1 2 3
    }
    cout<<"\n";

    vector<int>::iterator it;
    for (it = v.begin(); it < v.end(); it++)
    {
        cout<<*it<<" "; //output  1 2 3
    }
    cout<<"\n";
    for (auto element:v)  //automatic assigns data type to the variable
    {
        cout<<element<<" "; //output 1 2 3
    }
    cout<<"\n";

    v.pop_back();  //output 1 2     

    vector<int>v2(3,50);

    swap(v,v2); //the values of the vector are changed

    for (auto element:v)
    {
        cout<<element<<" "; //output 1 2 3
    }
    cout<<"\n";

    for (auto element:v2)
    {
        cout<<element<<" "; //output 1 2 3
    }
    cout<<"\n";
    
       
    return 0;
}