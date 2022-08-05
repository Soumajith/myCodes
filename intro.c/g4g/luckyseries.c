//https://www.geeksforgeeks.org/lucky-numbers/?ref=lbp
#include <stdio.h>
#include <stdbool.h>
int isLucky(int n){
    static int counter = 2;

    if(counter>n) return 1;
    if(n%counter == 0) return 0;

    int next_position = n - (n/counter);

    counter++;

    return isLucky(next_position);
}
int main(){
    int n;
    scanf("%d",&n);
    if(isLucky(n)) printf("Number from lucky series\n");
    else printf("Not a number from the lucky series\n");
}