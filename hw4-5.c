#include <stdio.h>
int main(void)
{
	double height, ideal, weight;
	printf("Height?\n");
	scanf("%lf", &height);
	printf("Weight?\n");
        scanf("%lf", &weight);
	ideal = height*height*22/10000;
	printf("Ideal weight = %f\n", ideal);
	if (weight - ideal > 5)
		{printf("Let’s reduce sweets\n");}
        else if (weight - ideal < -5)
		{printf("Eat some more\n");}
	else 
		{ printf("Go for it\n");}
	return 0;
}
