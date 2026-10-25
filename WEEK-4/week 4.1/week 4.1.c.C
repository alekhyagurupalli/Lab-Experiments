#include<stdio.h>
int main()
{
    float A,result;
    int B;
    printf("Enter A value:");
    scanf("%f",&A);
    printf("Enter B value:");
    scanf("%d",&B);
    printf("%f+++%d---%f=",A,B,A);
    result=A+++B---A;
    printf("%f",result);
    printf("\nA=%f\tB=%d",A,B);
    
    return 0;
}    
