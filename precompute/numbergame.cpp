#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        //4
        //8
        //6
        float hard, cc, ts; //50 0.7l 5600
        cin>>hard>>cc>>ts;
        int ans = 0;
        if(hard>50){
            ans +=1;
        }
        if(cc<0.7) ans+=3;
        if(ts >5600) ans +=5;
        // cout<<ans<<endl;
        switch (ans)
        {
        case 0:
            cout<<"5"<<endl;
            break;
        case 1:
            cout<<"6"<<endl;
            break;
        case 3:
            cout<<"6"<<endl;
            break;
        case 4:
            cout<<"9"<<endl;
            break;
        case 5:
            cout<<"6"<<endl;
            break;
        case 6:
            cout<<"7"<<endl;
            break;
        case 8:
            cout<<"8"<<endl;
            break;
        case 9:
            cout<<"10"<<endl;
            break;
        }
    }
}