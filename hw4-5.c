#include <stdio.h>
int main(void)
{
    double height, ideal;
    printf("Height?\n");
    scanf("%lf", &height);
    double weight;
    printf("weight?\n");
    scanf("%lf", &weight);
    ideal = height * height * 22 / 10000;
    printf("Ideal weight = %f\n", ideal);
    if (weight-ideal>5){
        printf("Let’s reduce sweets\n");
    }
    if (ideal-weight>5){
        printf("Eat some more\n");
    }
    if (ideal - weight <= 5 && weight - ideal <= 5){
        printf("Go for it\n");
    }
    return 0;
}
