#include <stdio.h>
int main(void)
{
    double height, ideal,weight;
    printf("Height? ");
    scanf("%lf", &height);
    printf("weight? ");
    scanf("%lf", &weight);
    ideal = height * height * 22 / 10000;
    printf("Ideal weight = %f\n", ideal);
    if (weight-ideal>5){
        printf("Let’s reduce sweets");
    }
    if (ideal-weight>5){
        printf("Eat some more");
    }
    if (ideal - weight <= 5 && weight - ideal <= 5){
        printf("Go for it");
    }
    return 0;
}
