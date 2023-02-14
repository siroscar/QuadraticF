#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,d,x1,x2;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);
    d= (b*b-4*a*c);//calculate for d
    if (d>0){
         x1= (-b+sqrt(d))/2*a;
         x2= (-b-sqrt(d))/2*a;
         printf("The value of x1 is %.1f and x2 is %.2f", x1,x2);
    }
    else if (d==0){
        x1= (-b/2*a);
        x2= (-b/2*a);
        printf("The values of x are %f and %f", x1,x2);//the roots are the same
    }
    else
        printf("There is no logical value of x");//there are no roots
    return 0;
}
