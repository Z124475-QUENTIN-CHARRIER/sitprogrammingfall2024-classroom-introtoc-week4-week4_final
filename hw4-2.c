#include <stdio.h>
int main(void) {
    int x;
    scanf("%d",&x);
    if (x>0){
        printf("Positive");
    }
    if (x<=0){
        printf("Negative or zero");
    }
    return 0;
}
