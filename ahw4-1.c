#include <stdio.h>
int main(void)
{
    int x;
    scanf("%d",&x);
    if (x>0){
        printf("%d is a positive number",x);
    }
    if (x<0){
        printf("%d is a negative number",x);
    }
    if (x==0){
        printf("You entered 0");
    }
    return 0;
}
