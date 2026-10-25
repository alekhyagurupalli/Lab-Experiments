#include<stdio.h>
int main()
{
    float speed, time, distance;

    printf("Enter speed of the object: ");
    scanf("%f", &speed);

    printf("Enter time taken: ");
    scanf("%f", &time);

    distance = speed * time;

    printf("Distance traveled = %.2f\n", distance);

    return 0;
}
