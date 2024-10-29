#include <stdio.h>
int main(void) {
    int x, y, z;
    int average;
    scanf("%d %d %d", &x, &y, &z);
    average = (x + y + z) / 3;
    printf("Average is %d\n", average);
    return 0;
}

