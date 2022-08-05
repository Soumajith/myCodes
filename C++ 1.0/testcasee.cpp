#include<iostream>
#include<string.h>
using namespace std;
void strsep(string,int);
int main()
{
    int len;
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    len = str.length();
    strsep(str,len);
    return 0;
}

void strsep(string str, int len)
{
    string g;
    for(int i=0 ; i<len ; i++)
    {
        if(str[i]!=' ')
        {
            g[i]=str[i];
        }
        cout<<g;
    }
}