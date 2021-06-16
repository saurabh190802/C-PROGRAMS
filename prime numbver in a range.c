#include <stdio.h>

 
int main()
{
    int num1, num2, i, j, a, b, c = 0;
 
    printf("enter the value of num1 and num2 \n");
    scanf("%d %d", &num1, &num2);
    if (num2 < 2)
    {
        printf(" no primes between this 2 numbers");
        return 0;
    }
    printf("Prime numbers are \n");
    b = num1;
    if ( num1 % 2 == 0)
    {
        num1++;
    }
    for (i = num1; i <= num2; i = i + 2)
    {
        a = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if ((i % j) == 0)
            {
                a = 1;
                break;
            }
        }
        if (a == 0)
        {
            printf("%d\n", i);
            c++;
        }
    }
    printf("Number of primes between %d & %d = %d\n", b, num2, c);
    return 0;
}
