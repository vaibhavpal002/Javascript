//Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int _num,Sum=0,firstDigit,secondDigit,thirdDigit,b;
   
    printf("Enter the  \"Three digit number\" : ");
    scanf("%d",&_num);
    printf("\n");
    firstDigit=_num%10;
    b=_num/10;
    secondDigit=b%10;
    thirdDigit=b/10;
    Sum=firstDigit+secondDigit+thirdDigit;
    printf("Sum is :%d",Sum);
    return 0;
}
