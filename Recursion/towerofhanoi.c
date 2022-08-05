#include <stdio.h>
void towerofhanoi(int disk, char fromTower, char toTower, char auxTower){
    if(disk == 1){
        printf("\nMove disk 1 from %c to %c ", fromTower, toTower);
        return;
    }
    //A to B using C (n-1) disks
    towerofhanoi(disk-1, fromTower, auxTower, toTower);

    //A to C remaining disks
    printf("\nMove disk %d from %c to %c ", disk, fromTower, toTower);

    //B to C (n-1) disks using A
    towerofhanoi(disk-1, auxTower, toTower, fromTower);
}

int main()
{
    char fromTower = 'A', toTower = 'B', auxTower = 'C';
    int disk = 3;

    towerofhanoi(disk, fromTower, toTower, auxTower);\

}
