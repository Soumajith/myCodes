#include <bits/stdc++.h>
using namespace std;
/*Luffy and his crew are on the way to dressora, where he will be fighting one of the warlords of the sea Doflamingo. But now he is getting bored and wants to do a fun activity. He is very much obsessed with palindromes. Given a String of lowercaase english alphabet of length N and two integers L and R he wants to know whether all the letters of the substring fromm index L to R can be rearranged to form a palindrome or not. He wants to know this for Q values for L and R and needs your help in finding answer.
1<= t <= 10
1<= N, Q <= 100000
1<= L <= R <= N
'a'<= S[i] <= 'z'
*/

const int N = 1e5 + 10;
int hsh[N][26];        //time optimisation

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        for (int i = 0; i < N; i++)
        {   
            for (int j = 0; j < 26; j++)
            {
                hsh[i][j] = 0;
            }
        }
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        for (int i = 0; i < n; i++)
        {
            hsh[i+1][s[i] - 'a']++;   //to count the frequency
        }
        for (int i = 0; i < 26; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                hsh[j][i] += hsh[j-1][i];    //prefix sum
            }
            
        }
        
        while (q--)
        {
            int l, r;
            cin>>l>>r;
            // int hash[26];               //for counting the frequency of the character
            // for (int i = 0; i < 26; i++)
            // {
            //     hash[i] = 0;
            // }
            // l--;
            // r--;
            // for (int i = l; i <= r; i++)
            // {
            //     hash[s[i] - 'a']++;
            // }
            int oddct=0;
            // for (int i = 0; i < 26; i++)
            // {
            //     if(hash[i] % 2 != 0) oddct++;
            // }
            for (int i = 0; i < 26; i++)
            {
                int charct = hsh[r][i] - hsh[l-1][i];     //
                if(charct%2 != 0) oddct++;
            }
            
            if(oddct > 1 ) cout<<"No\n";
            else cout<<"Yes\n";
        }
    }
}

//for bruteforce - O(t * (n + Q*(26+n+26))) = O(t*Q*n)
//after optimisation - O(t * (N + Q)) = O(t*N + t*Q); less than 1e7 + 10