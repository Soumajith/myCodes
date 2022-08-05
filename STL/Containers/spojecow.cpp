#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int n, cow;
int position[N];
bool canPlacecow(int minDist){
    int last_pos = -1;
    int cow_ct = cow;
    for (int i = 0; i < n; i++)
    {
        if(position[i] - last_pos >= minDist || last_pos ==-1){
            last_pos = position[i];
            cow_ct--;
        }
        if(cow_ct == 0) break;
    }
    return cow_ct ==0;
}
//T.C. = N*log(10^9)
int main(){
    int q;
    cin>>q;
    while(q--){
        cin>>n>>cow;
        for (int i = 0; i < n; i++)
        {
            cin>>position[i];
        }
        sort(position, position+n);

        long long lo=0,hi=1e9,mid;
        while(hi-lo > 1){
            mid = (hi+lo)/2;
            if(canPlacecow(mid)){
                lo = mid;
            }
            else{
                hi = mid-1;
            }
        }
        if(canPlacecow(hi)){
            cout<<hi<<endl;
        }
        else{
            cout<<lo<<endl;
        }
    }
}