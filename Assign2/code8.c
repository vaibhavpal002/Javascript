/*Write a program to check whether the given number is even or odd using a bitwise 
operator.*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    if(x&1==1)
    printf("Odd Number");
    else
    printf("Even Number");
    return 0;
}