#include <stdio.h>
#include <math.h>
int main(void) {	
double a, b, c, d;
scanf("%lf", &a);
scanf("%lf", &b);
scanf("%lf", &c);
printf("Input is a=%f", a);
printf(" b=%f", b); 
printf(" c=%f:\n", c);
if (a==0) {
    printf("Output should be %f\n", -c/b);
}
else {
	d = b*b - 4*a*c;
	if (d<0){
		printf("Output should be the real solution does not exist\n");
	}   
	else {
        printf("Output should be %f and ", (-b+sqrt(d))/2*a);
        printf("%f\n", (-b-sqrt(d))/2*a);
	}
}
return 0;
}
