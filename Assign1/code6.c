/*WAP to print the name of the user in double quotes.
Expected output format – “Hello , Amit Kumar”*/
#include<stdio.h>
int main()
{
    char name[20];
    printf("Please Enter your Good name: ");
    scanf("%[^\n]%*c",name);
    printf("\"Hello , %s\"",name);
    return 0;
}