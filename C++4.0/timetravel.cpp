#include <bits/stdc++.h>
using namespace std;

//timetravel and microwave problem
/*
Our beloved mad scientist Okabe Rintaro, after being a part of dozens of time travels shows the signs of his 
conscientiousness fading but this time his childhood friend Mayuri Shiina has come for your help before that could happen. You realize that time traveling once more could help mitigate this issue but you don't know the number required to put on the microwave. Reading the notes you find out that the number needs to be such that the prefix sum and the suffix sum of the digits of that number at any given index are divisible by 7 and each digit is greater than 0. Now will you be able to find out what that number is?
d out what that number is?

Input Format
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, the length of the number you have to output n.
Output Format
For each testcase, output in a single line the number you should enter in the microwave

Constraints
1≤T≤105
1≤n≤106
Sum of n over all test cases is ≤1000000
Sample Input 1 
1
1
Sample Output 1 
7
Explanation
Since the total no. of digits in the number is only 1, we have only 1 index to check prefix as well as suffix sum. As we can see if we take 7 as our number our prefix sum at index 0 is 7 which is divisible by 7 and our suffix sum at index 0 is also 7 which is divisible by 7.
*/
//T= 1e5 + 10;

const int N = 1e6 + 10;
int arr[N];

//O(T*N);

int sufi(int n,int suf[])
{
    int counter=0;
        for(int j=0;j<n;j++)
        {
            suf[j]=suf[j]+counter;
            counter=counter+suf[j];
        }
    counter=0;
        for (int i=0;i<n;i++)
        {
            counter=counter+suf[i];
        }
        return counter;
}
int prefi(int n,int suf[])
{
    int counter=0;
        for(int j=n-1;j>=0;j--)
        {
            suf[j]=suf[j]+counter;
            counter=counter+suf[j];
        }
    counter=0;
        for (int i=0;i<n;i++)
        {
            counter=counter+suf[i];
        }
        return counter;
}
int main()
{
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        arr[n];
        int start=0;
        int end =0;
        for(int i=1;i<=n;i++)
        {
            start=(start*10)+1;
        }
        for(int i=1;i<=n;i++)
        {
            end=(end*10)+9;
        }
        for (int j=start;j<=end;j++)
        {
            for(int i=n-1;i>+0;i--)
        {
        arr[i]=j%10;
        j=j/10;
        }
        if(sufi(n,arr)%7==0 && prefi(n,arr)%7==0)
        {cout<<j;
        break;}
        else{}
        }
    }
    return 0;
}

//suffix
/*
arr={1,1,1,1,1}
if prefix
if suffix_sum
print
else
arr=(3)

*/