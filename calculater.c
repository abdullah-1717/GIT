#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int a;
    char operator;
    int b;
    printf("First value: ");
    scanf("%d", &a);
    printf("Second value: ");
    scanf("%d", &b);
    printf("Enter Operator: ");
    scanf(" %c", &operator );
    // switch(operator)
    // {
    //     case '+': printf("Addition is %d\n", a+b);
    //     break;
    //     case '-': printf("substraction is %d\n", a-b);
    //     break;
    //     case '*': printf("Multify is %d\n", a*b);
    //     break;
    //     case '/': printf("Divide is %d\n", a/b);
    //     break;
    //     default: printf("invalid choice\n");
    // }
    if(operator == '+')
    {
        printf("Addition is %d\n", a+b);
    }
else if(operator == '-')
{
    printf("Substraction is %d\n", a-b);
}
else if(operator == '*')
{
printf("Multipy is %d\n", a*b);
}
else if(operator == '/')
{
    printf("divide is %d\n", a/b);
} else{
    printf("invalid choise\n");
}
}