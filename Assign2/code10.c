/* Write a program to make the last digit of a number stored in a variable as zero. 
(Example - if x=2345 then make it x=2340)*/
#include<stdio.h>
int main()
{
    int a,b,num;
    printf("Enter the number : ");
    scanf("%d",&num);
    a=num/10;
    b=a*10;
    printf("Required digit with last digit as zero : %d",b);
    return 0;
}