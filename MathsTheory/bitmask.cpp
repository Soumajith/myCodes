#include <bits/stdc++.h>
//Consider this problem: There are N≤5000 workers. Each worker is available during some days of this month (which has 30 days). For each worker, you are given a set of numbers, each from interval [1,30], representing his/her availability. You need to assign an important project to two workers but they will be able to work on the project only when they are both available. Find two workers that are best for the job — maximize the number of days when both these workers are available.
//https://codeforces.com/blog/entry/73558
using namespace std;
void printBinary(int &num){
    for (int i = 30; i > 0; i--)
    {
        cout<<((num>>i) & 1);
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    vector<int>masks(n,0);
    for (int i = 0; i < n; i++)
    {
        int num_days;
        cin>>num_days;
        int mask = 0;
        for (int j = 0; j < num_days; j++)
        {
            int day;
            cin>>day;
            mask= (mask|1<<day);  //sets the day
        }
        masks[i] = mask;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<masks[i]<<endl;
    //     printBinary(masks[i]);
    // }
    int max_day = 0;
    int personA = -1;
    int personB = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int intersection = masks[i] & masks[j];
            int common_day = __builtin_popcount(intersection);
            if(max_day<common_day){
                max_day = common_day;
                personA = i;
                personB = j;
            }
        }
    }
    cout<<max_day<<" "<<personA<<" "<<personB<<endl;
}