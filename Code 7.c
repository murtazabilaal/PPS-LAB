#include <stdio.h>
int main()
{
    float p;
    float q;
    float r;
    printf("enter p:");
    scanf("%f", &p);
    printf("enter q:");
    scanf("%f", &q);
    printf("enter r:");
    scanf("%f", &r);
    float A= p*q*r;
    float avg = A/100;
    printf("simple interest of p,q,r :%f", avg);
    return 0;
}
