#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s = "dforuyNDHVUIwqbcma";
    //'a' - 'A' = 32;
    //all in lower case
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]>='a' && s[i]<='z')
        {
            s[i] = s[i] - 32;
        }   
    }
    cout<<s<<endl;
    //all in upper case
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]>='A' && s[i]<='Z')
        {
            s[i]+=32;
        }
        
    }
    cout<<s<<endl;

    //using function keyword
    string s1 = "hdfosjifBFLOFldslNKVDLN";

    transform(s1.begin(), s1.end(), s1.begin(), :: toupper);
    cout<<s1<<endl;

    transform(s1.begin(), s1.end(), s1.begin(), :: tolower);
    cout<<s1<<endl; 

    //greatest number
    string s2 = "54687449";
    sort(s2.begin(), s2.end(), greater<int>());

    cout<<s2<<endl;

    sort(s2.begin(), s2.end(), less<int>());
    cout<<s2<<endl;

    //max repeating character in a word
    string s3 = "khkdhfoilfhhkkjkkkkdgeyfkku";
    
    //using iterater
    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i]=0;
    }
    for (int i = 0; i < s3.length(); i++)
    {
        freq[s3[i]-'a']++;
    }
    int max = 0;
    char a = ' ';

    for (int i = 0; i < 26; i++)
    {
        if (max<freq[i])
        {
            max = freq[i];
            a = i + 'a';
        }
    }
    cout<<max<<endl;
    cout<<a<<endl;
    cout<<endl;
    //using sort
    sort(s3.begin(), s3.end());
    cout<<s3<<endl;

    int maxf = 0;
    char ans = ' ';
    int temp = 0;
    int j = 0;

    while(j<s3.length()){
        if (s3[j] == s3[j+1])
        {
            temp++;
            if (temp > max)
            {
                maxf = temp;
                ans = s3[j];
            }
            
        }
        else{
            temp = 0;
        }
        j++;
    }

    cout<<ans<<endl;
    cout<<maxf<<endl;
    return 0;
}