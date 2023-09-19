//Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;
    a=sizeof(a);
    b=sizeof(b);
    c=sizeof(c);
    d=sizeof(d);
    printf("size of int is :%d\n",a);
    printf("size of float is :%f\n",b);
    printf("size of char is :%d\n",c);
    printf("size of double is :%lf",d);
    return 0;
}