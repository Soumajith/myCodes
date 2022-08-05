#include <stdio.h>
#include <stdlib.h>

int main(){
    char s[]="girl";
    int i;
    for(i=0;s[i];i++){
        printf("\n%c%c%c%c",s[i],*(s+i),*(i+s),i[s]);
    }
    
}