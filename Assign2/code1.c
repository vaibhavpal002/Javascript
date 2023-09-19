//Write a program to print unit digit of a given number
#include<stdio.h>
int main()
{
    int a,unitDigit;
    printf("Enter A number :");
    scanf("%d",&a);
    unitDigit=a%10;
    printf("Unit digit is : %d",unitDigit);
    return 0;

}