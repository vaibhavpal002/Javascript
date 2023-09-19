/*Write a program to input a number from the user and also input a digit. Append a 
digit in the number and print the resulting number. (Example - number=234 and 
digit=9 then the resulting number is 2349)*/
#include<stdio.h>
int main()
{
    int num,a,b;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Enter the digit which you want to append : ");
    scanf("%d",&a);
    b=num*10+a;
    printf("Resulting Number is : %d",b);
    return 0;

}