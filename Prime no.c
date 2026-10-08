#include<stdio.h>
int main()
{
    int isprime = 1;
    for(int j = 2; j < 32; j++)
    {
        if(32 % j == 0)
        {
            isprime = 0;
            break;
        }
    }
    if(isprime == 1){
        printf("is prime");
    }
    else
    {
        printf("is not prime");
    }
    return 0;
}
