#include <stdio.h>
int main()

{
    float a;
    float b;
    float c;
    printf("enter a:");
    scanf("%f", &a);
    printf("enter b:");
    scanf("%f", &b);
    printf("enter c:");
    scanf("%f", &c);
    float A=a+b+c;
    float AVG= A/3;
    printf("Average of a,b,c :%f", AVG);
    return 0;
}
