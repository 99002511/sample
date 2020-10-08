#include "sample.h"
int main()
{
    int num1=0,num2=0,z;
    printf("Enter first number");
    scanf("%d",&num1);
    printf("Enter second number");
    scanf("%d",&num2);
    z=add(num1,num2);
    printf("%d",z);
    return 0;
}
