#include <stdio.h>
#include <math.h>

int main()
{
    float num, result;

    printf("Enter a number: ");
    scanf("%f", &num);

    if (num < 0) 
    {
        printf("Square root of a negative number is not a real number.\n");
    }
    
    else
    {
        result = sqrt(num);
        printf("Square root = %.2f\n", result);
    }

    return 0;
}
