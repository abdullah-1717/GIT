#include<stdlib.h>
#include<stdio.h>
int main (void)
{
    int a;
    int b;
    printf("Enter first character of your name: ");
    scanf("%c",&a);
    printf("Enter you are age: ");
    scanf("%d", &b);
    if(b>0,b<7)
    {
        printf("Is a Kid");
    }
    else if (b>7,b<20)
    {
        printf("Is an Adult");
    }
    else if(b>20,b<40)
    {
        printf("Is a man like a real man");
    }
    else if(b>40)
    {
        printf("Is too Old");
    }
}