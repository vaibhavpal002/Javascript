//Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the Number : ");
    scanf("%d",&a);
    b=a/10;
    printf("Number without Last Digit is :%d",b);
    return 0;
}