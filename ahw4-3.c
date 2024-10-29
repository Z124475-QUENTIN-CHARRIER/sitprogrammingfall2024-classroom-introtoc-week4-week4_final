int main(void)
{
double a,b,c,d;
printf("a? ");
scanf("%lf", &a);
printf("b? ");
scanf("%lf", &b);
printf("c? ");
scanf("%lf", &c);
d = b*b - 4*a*c;
printf("Input is a=%f b=%f c=%f:\n", a, b, c);
if (d<0){
    printf("The real solution does not exist\n");
    return 0;
}
if (a==0){
    printf("Output should be %f\n",-c/d);
}
if (d>=0 && a!=0){
    printf("Output should be %f and %f\n",(-b+sqrt(d))/2*a,(-b-sqrt(d))/2*a);
}
return 0;
}
