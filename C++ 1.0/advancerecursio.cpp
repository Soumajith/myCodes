#include <iostream>
using namespace std;
//Given 2xn board and tiles of 2x1, count the number of ways to tile the given the board
int tilesbuild(int n){
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    return tilesbuild(n-1) + tilesbuild(n-2);
}

//pairing of friends for dance
int friendspairing(int n){
    if (n==0 || n==1 || n==2)
    {
        return n;
    }
    return friendspairing(n-1) + friendspairing(n-2)*(n-1);
}

//put n items with given weight and given values in knacksack of weight W to get the maximum total value in knacksack
int mostvalue(int wt[], int value[], int n, int W){
    if (n==0 || W==0)
    {
        return 0;
    }
    if (wt[n-1] > W)
    {
        return mostvalue(wt, value, n-1, W);
    }
    return max(mostvalue(wt, value, n-1, W-wt[n-1])+value[n-1], mostvalue(wt, value, n-1, W));
}
int main(){
    cout<<tilesbuild(4)<<endl;
    cout<<friendspairing(4)<<endl;
    int wt[3] = {10, 20, 30};
    int value[] = {100, 50, 150};
    int W = 50;

    cout<<mostvalue(wt, value, 3, W);


    return 0;
}