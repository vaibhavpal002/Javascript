//Write a program to swap values of two int variables
#include<stdio.h>
int main()
{
    int first_num,second_num,swap_number;
    printf("Enter the first NUmber : ");
    scanf("%d",&first_num);
    printf("\n");
    printf("Enter the second number : ");
    scanf("%d",&second_num);
    swap_number=first_num;
    first_num=second_num;
    second_num=swap_number;
    printf("Value of First NUmber is : %d, Second Number is : %d respectively",first_num,second_num);
    return 0;
}    