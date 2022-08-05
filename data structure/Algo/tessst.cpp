#include <bits/stdc++.h>
using namespace std;
bool isPossible(int min, int a, int b, vector<int> &c){
    int maxtime, total_t=0;
    int workers = a;
    for (int i = 0; i < c.size(); i++)
    {
        if(workers){
            int time = c[i]*b;
            maxtime = max(time,maxtime);
            workers--;
            
        }
        else
            total_t += maxtime;
            workers = a;

    }
    if(workers)
    total_t += maxtime;
    return total_t<=min;
}
int main(){
    int n; cin>>n;
    vector<int>c(n);
    int a,b;
    cin>>a>>b;
    for (int i = 0; i < n; i++)
    {
        cin>>c[i];
    }
    int res = isPossible(50,a,b,c);
    cout<<res<<endl;

}