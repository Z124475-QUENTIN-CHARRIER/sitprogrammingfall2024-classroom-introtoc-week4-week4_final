#include <stdio.h>
int main(void)
{
    int x,y,z,max;
    max=x;
   scanf("%d %d %d", &x, &y, &z);
   if (x<y){
    max=y;
   }
   if (z>max){
    max=z;
   }
   printf("Max is %d",max);
    return 0;
}
