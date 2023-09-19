//Write a program to find the position of first 1 in LSB.
#include<stdio.h>
int main()
{
    int x,count=0;
    printf("Enter the Number :");
    scanf("%d",&x);
    while(x!=0)
    {   
       
        if(x&1==1)
        {
            printf("%d",count);
            break;
        }
    x=x>>1;
    count++;
   
    }
    return 0;
}