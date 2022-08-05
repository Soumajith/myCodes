#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<b){
            a+=c;
            if(a<b){
                a+=d;
                if(a<b){
                    cout<<"S"<<endl;
                }
                else{
                    cout<<"N"<<endl;
                }
            }
            else if(b<a){
                b+=d;
                if(b>a){
                    cout<<"S"<<endl;
                }
                else{
                    cout<<"N"<<endl;
                }
            }
            else{
                b+=d;
                if(b>a){
                    cout<<"S"<<endl;
                }
                else{
                    cout<<"N"<<endl;
                }
            }
        }
        else if(b<a){
            b+=c;
            if(b<a){
                b+=d;
                if(a<b){
                    cout<<"S"<<endl;
                }
                else{
                    cout<<"N"<<endl;
                }
                
            }
            else if(b>a){
                a+=d;
                if(b>a){
                    cout<<"S"<<endl;
                }
                else{
                    cout<<"N"<<endl;
                }
            }
            else{
                b+=d;
                if(a<b){
                    cout<<"S"<<endl;
                }
                else{
                    cout<<"N"<<endl;
                }
                cout<<"N"<<endl;
            }
        }
        else{
            b+=c;
            if(b<a){
                b+=d;
                if(a>b){
                    cout<<"S"<<endl;
                }
                else{
                    cout<<"N"<<endl;
                }
                
            }
            else if(b>a){
                a+=d;
                if(b>a){
                    cout<<"S"<<endl;
                }
                else{
                    cout<<"N"<<endl;
                }
            }
            else{
                b+=d;
                if(a<b){
                    cout<<"S"<<endl;
                }
                else{
                    cout<<"N"<<endl;
                }
            }
            
        }
    }
}