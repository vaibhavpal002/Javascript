/*Write a program to take a three-digit number from the user and rotate its digits by 
one position towards the right*/
#include<stdio.h>
int main()
{
    int a,b,c,num;
    printf("Enter any \"Three Digit NUmber\" :");
    scanf("%d",&num);
    b=num/10;
    a=num%10;
    c=a*100+b;
    printf("Required Number is : %d",c);
    return 0;

}