//Write a program to swap values of two int variables without using a third variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the  first number : ");
    scanf("%d",&a);
    printf("\n");
    printf("Enter the second number : ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Value of First NUmber is : %d, Second Number is : %d respectively",a,b);
    return 0;
}