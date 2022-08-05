#include <bits/stdc++.h>
using namespace std;
//maps use red and black trees inbuilt implementation
void print(map<int,string>&m){
    cout<<m.size()<<endl;
    for (auto &pr : m)   //O(logn) for accessing and for loop it is O(nlogn)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    
}
void print(map<string,string>&m){
    cout<<m.size()<<endl;
    for (auto &pr : m)   //O(logn) for accessing and for loop it is O(nlogn)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    
}
int main(){
    map<int,string>m;    //map stores a key and value 
    m[1] = "noob";       //O(logn)
    m[2] = "pro";
    m[9] = "god";
    m.insert({5,"hacker"});  //o(logn)
    m[6]; //even if you dont put value it will take O(logn) and the default value will be \0 null, and for int it will be zero
    m[5] = "Zero";  //it resets the value of the 5 int

    //m.clear()  //clears full map
    auto it = m.find(7);

    if(it != m.end())  m.erase(it);   //O(logn) use if statement for safety check
    // if (it == m.end()) cout<<"NO value"<<endl;
    // else cout<<(*it).first<<" "<<(*it).second<<endl;
    map<string,string>s;
    s["abcd"] = "efgh"; //the time complexity depends on the size of the string so O(s.size()*logn)

    print(m);
    print(s);
}