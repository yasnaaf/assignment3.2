#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,delta,x1,x2;
    printf("Enter a,b,c to make a second degree equation:\n");
    scanf("%f %f %f",&a,&b,&c);
    printf("\n a=%.3f \n b=%.3f \n c=%.3f");
    delta=(b*b)-(4*a*c);
    if (delta>=0){
    x1=(-b+ sqrt(delta))/(2*a);
    x2=(-b- sqrt(delta))/(2*a);
    printf("roots are:%3.f,%3.f",x1,x2);}
    else{printf("\n no roots");}
    return 0;
}
