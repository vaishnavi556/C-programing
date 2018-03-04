#include<stdio.h>
    int max,min;
main()
{
    int a,b,c;
    printf("\n Enter the first number: ");
    scanf("%d",&a);
    printf(" Enter the second number: ");
    scanf("%d",&b);
    printf(" Enter the third number: ");
    scanf("%d",&c);
    Max(a,b,c);
    Min(a,b,c);
}
Min(int a,int b,int c)
{
    min=(((a < b) && (a < c)) ? a : (b < c) ? b : c);
        printf("\nThe smallest number is: %d",min);
}
int Max(int a,int b,int c)
{
    max=(((a > b) && (a > c)) ? a : (b > c) ? b : c);
        printf("\nThe largest number is: %d",max);
}
