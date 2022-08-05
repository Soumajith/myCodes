#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s3 = "hefhvlkljkkkkgjkdfbjkk";
    
    sort(s3.begin(), s3.end());

    cout<<s3<<endl;

    int maxf = 0;
    char ans = ' ';
    int temp = 1;
    int j = 0;

    while(j<s3.length()){
        if (s3[j] == s3[j+1])
        {
            temp++;
            if (temp > maxf)
            {
                maxf = temp;
                ans = s3[j];
            }
            
        }
        else{
            temp = 1;
        }
        j++;
    }

    cout<<ans<<endl;
    cout<<maxf<<endl;
    return 0;
}
