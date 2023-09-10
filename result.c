#include<conio.h>
#include<stdio.h>
int main (void)
{
    int P;
    int B;
    int C;
    int U;
    int E;
    int m;
    float per;
    printf("Marks of physics out of 100? ");
    scanf("%d", &P);
    printf("Marks of Biology out of 100? ");
    scanf("%d", &B);
    printf("Marks of Chemistry out of 100? ");
    scanf("%d", &C);
    printf("Marks of Urdu out of 100? ");
    scanf("%d", &U);
    printf("Marks of English out of 100? ");
    scanf("%d", &E);
    per = ((P+B+C+U+E)/500.0)*100;
    m = (P+B+C+U+E);
    printf("Your obtain marks is: %d\n",m);
    printf ("Your percentage is: %.2f",per);
    
}