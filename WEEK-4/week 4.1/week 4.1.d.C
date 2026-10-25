#include<stdio.h>
int main()
{
    int i, J;

    printf("Enter i: ");
    scanf("%d", &i);

    J = i++;
    J = J + (++i);

    printf("i = %d\n", i);
    printf("J = %d\n", J);

    return 0;
}
