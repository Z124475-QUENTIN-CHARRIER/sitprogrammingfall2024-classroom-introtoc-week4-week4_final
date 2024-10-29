#include <stdio.h>
#include <math.h>
int main(void) {
   float p,q,E;
   printf("p? ");
   scanf("%f", &p);
   q=1-p;
   E=-p*log(p)/log(2)-q*log(q)/log(2);
   printf("%f",E);
   return 0;
}
