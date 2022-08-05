#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int k =0;
    char word[80] = {"\n"};
    string s = "I Love C++";
    s = s+' ';
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != ' ')
        {
            word[k] = s[i];
            k++;
        }
        else
        {
            while(k>0){
                cout<<word[--k];
               
            }
            cout<<s[i];
        }
        
    }
    

   return 0;
}
