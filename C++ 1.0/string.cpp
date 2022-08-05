#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str(5, 'n');
    cout<<str<<endl;
    string s1 = "nincompoop";
    string s2 = "mine";
    s1.append(s2);
    cout<<s1<<endl;

    string s3 = "mine";

    if(s2.compare(s3) == 0){
        cout<<"It is same word"<<endl;
    }
    s1.erase(3, 11);
    cout<<s1<<endl;

    s1 = s1 + "compoop";
    cout<<s1<<endl;

    cout<<s1.find("com")<<endl;

    s1.insert(6, "lol");
    cout<<s1<<endl;

    cout<<s1.length()<<endl;

    for (int i = 0; i < s1.length(); i++)
    {
        cout<<s1[i]<<endl;
    }

    cout<<s1.substr(3, 3)<<"gg"<<endl;

    string num ="786";
    cout<<num + "2"<<endl;
    int f = stoi(num);
    cout<<f+2<<endl;

    int x = 567;
    string s5 = to_string(x);
    cout<<s5+"4"<<endl;

    string a = "joffhrrgbvmnsknoaoa";
    sort(a.begin(), a.end());
    cout<<a<<endl;

  return 0;
  
}