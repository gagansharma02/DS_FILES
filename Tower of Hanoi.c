//TOWER OF HANOI
#include <stdio.h>
// Function to move a disk from source peg to destination peg
void towerOfHanoi(int n, char source, char auxiliary, char destination,int *c) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        *c+=1;
        return;
    }

    // Move n-1 disks from source to auxiliary peg using destination as an auxiliary peg
    towerOfHanoi(n - 1, source, destination, auxiliary,c);


    // Move the nth disk from source to destination peg
    printf("Move disk %d from %c to %c\n", n, source, destination);
    *c+=1;
    // Move the n-1 disks from auxiliary peg to destination peg using source as an auxiliary peg
    towerOfHanoi(n - 1, auxiliary, source, destination,c);
}

int main() {
    int n,c=0;
    scanf("%d",&n);    // Number of disks
    towerOfHanoi(n, 'A', 'B', 'C',&c); // A, B, and C are the pegs
    printf("\n\nTotal Steps are -: %d",c);
    return 0;
}
