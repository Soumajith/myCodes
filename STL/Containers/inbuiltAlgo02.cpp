#include <bits/stdc++.h>
using namespace std;
// bool is_positive(int x){
//     return x>0;
// }
int main(){
    // auto sum = [](int x,int y){return x+y;}(4,5);  //lamda function, it is used to make a temporary function the syntax is given in the following the statement
    // cout<<sum<<endl;

    vector<int>v = {-2,-5,-8};
    cout<< all_of(v.begin(), v.end(), [](int x){return x>0;})<<endl; //we used lamda function to shorten the code all of checks the condition of funtion for all the elemnets in the function
    // cout<<all_of(v.begin(), v.end(), is_positive); //we can also write different code for the code but lambda is benenficial if fucntion is used once
    cout<<any_of(v.begin(), v.end(), [](int x){return x>0;})<<endl; //if any element is matching this function returns true
    cout<<none_of(v.begin(), v.end(), [](int x){return x>0;})<<endl; //if none of the element matches the function then it returns true
    cout<<endl;
    //for even/odd
    cout<< all_of(v.begin(), v.end(), [](int x){return x%2==0;})<<endl;
    cout<<any_of(v.begin(), v.end(), [](int x){return x%2==0;})<<endl; 
    cout<<none_of(v.begin(), v.end(), [](int x){return x%2==0;})<<endl;
}