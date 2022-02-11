#include<stdio.h>

int hasZero(long long x)
{
    while(x)
    {
        if(x % 10 == 0)
            return 1; //x has 0

        x = x/10;
    }

    return 0; //x does not have 0
}

int main()
{
    long long x = 102345;
    
    printf("%d\n", hasZero(x));

    if(hasZero(x) == 1)
        printf("yes!");

    return 0;
}
