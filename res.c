#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int s;
    int a[s];
    int i=0;
    int sum=0;
    int total;
    float per;
    printf("Enter your total Marks: ");
    scanf("%d",&total);
    printf("How much your subject? ");
    scanf("%d",&s);
    for (i = 1;i<=s;i++)
    {
        printf("marks in subject %i" ,i);
        printf("? ");
        scanf("%d",&a[s]);
        sum = sum +a[s];
       per = (sum/(float)total)*100;
    }
    
    if (per >= 90 )
    {
       printf("Grade: A+\n");
    } 
    else if ( per < 90 && per >=80 )
    {
        printf("Grade: A\n");
    }
    else if ( per < 80 && per >=70 )
    {
        printf("Grade: B\n");
    }
    else if ( per < 70 && per >=60 )
    {
        printf("Grade: C\n");
    }
    else if ( per < 60 && per >=50 )
    {
        printf("Grade: D\n");
    }
    else if ( per < 50 && per >=40 )
    {
        printf("Grade: E\n");
    }
    else if ( per < 40 )
    {
        printf("Grade: F\n");
    }

       printf("obtain marks: %d\n",sum );
       printf("Your percentage: %f\n",per);
       scanf("%d%f",&sum,&per); 
}