#include <stdio.h>
int main(void) {
   int x,y;
   scanf("%d %d", &x, &y);
   if (x>y){
    printf("%d",x);
   }
   if (x<y){
    printf("%d",y);
   }
   return 0;
}
