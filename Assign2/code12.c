/*Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
convert it into USD*/
#include<stdio.h>
int main()
{
    float amount,usd;
    printf("Enter the amount in Indian Currency : ");
    scanf("%f",&amount);
    usd=amount*76.23;
    printf("After converting into USD\n");
    printf("The Currency becomes : %.2f",usd);
    return 0;

}