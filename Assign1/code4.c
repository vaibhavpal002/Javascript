/*WAP to find the area of the circle. Take radius of circle from user as input and print the 
result in below given format.
Expected output format – “Area of circle is A having the radius R”. Replace A with area 
& R with radius.*/
#include<stdio.h>
int main()
{
    float area,radius;
    printf("Enter the Value of radius :");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("Area of circle is %f having the radius %f",area,radius);
    return 0;
}