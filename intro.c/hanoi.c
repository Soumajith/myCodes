#include <stdio.h>
void towerOfHanoi(int disk, char from, char to, char mid){
    if(disk>0){
        //A to C using n-1 disks
        towerOfHanoi(disk-1, from, mid, to);

        printf("Move a disk from %c to %c\n", from, to);

        //B to C using n-1 disks
        towerOfHanoi(disk-1, mid, to, from);
    }
}
int main(){
    int disk;
    printf("Enter the number of disks: ");
    scanf("%d",&disk);
    char from = 'A', to = 'C', mid = 'B';
    towerOfHanoi(disk,from,to,mid);
}