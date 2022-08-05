#include <bits/stdc++.h>
using namespace std;
void printV(vector<int> &v){   //here vector v is sent as copy so O(n), to avoid we can use refernce(&v) but in that case it can affect the original vector
    cout<<"Size: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)  //O(v.size()) is )(1)
    { 
        cout<<v[i]<<" ";
    }
    v.push_back(4);
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    vector <int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x); //O[1]
    }
    vector<int> v1(10, 3); //10 is for size 3 is for repeatative element
    v1.push_back(8);
    v1.push_back(10);
    v1.pop_back();   //O(1)

    vector<int>v2 = v1;  //O(n) because a copy is formed in this case..... in case of array points towards another array
    //if any changes is made to the v2, v1 is not affected
    // 
    printV(v1);
    printV(v);
}