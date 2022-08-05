#include <bits/stdc++.h>

using namespace std;
//here we learnt about the overflow of int and how to write testcases and condtional loop
int main(){
    // long long int l, b;
    // cin>>l>>b;
    // long long int area = l* 1LL *b; 
    // 1LL states that it calculate the multiple of b & c as long long int
    // cout<<l*b<<"\n";
    // int a = 2;
    // int b =5;
    // int c = 4;
    // cout<< (b>c) && ( b>a);

    // int testcase;
    // cin>>testcase;
    // while(testcase--)
    // {
    //     int n;
    //     cin>>n;
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j <= i; j++)
    //         {
    //             cout<<"*"<<" ";
    //         }
    //         cout<<endl;
    //     }
        
    // }
    // for (int i = 0;; i++){
    //         int n;
    //         cin>>n;
    //         if (n == 42)
    //         {
    //             break;
    //         }
    //         cout<<n<<endl;
    // }
    // int t;
    // cin>>t;
    // while(t--){
    //     int sum = 0, n;
    //     cin>>n;
    //     while (n>0){
    //         sum+=n%10;
    //         n = n/10;
    //     }
    //     cout<<sum<<endl;
    // }
    // int t;
    // cin>>t;
    // cin.ignore();
    // while(t--){
    //     string s;
    //     getline(cin, s);
    //     cout<<s<<endl;
    // }

    // string c;
    // getline(cin, c);
    // string c_rev;
    // for (int i = c.length() - 1; i >=0 ; i--)
    // {
    //     c_rev.push_back(c[i]);
    // }
    // cout<<c_rev;
    
    int t;
    cin>>t;
    while(t--){
        string J, S;
        cin>>J>>S;
        int sum = 0;
        for (int i = 0; i < J.size(); i++)
        {
            for (int j = 0; j < S.size() ; j++)
            {
                if (S[i] == J[i])
                {
                    sum++;
                    break;
                }
            }
        }
        cout<<sum<<endl;
    }
    

    return 0;
}