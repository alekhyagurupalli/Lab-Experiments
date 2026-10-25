#include<stdio.h>
int main()
{
    int n1, n2, n3, n4, n5, total;
    float average;

    printf("Enter marks of 5 subjects: ");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);

    total = n1 + n2 + n3 + n4 + n5;
    average = total / 5.0;

    printf("Total marks = %d\n", total);
    printf("Average marks = %.2f\n", average);

    return 0;
}
