#include <stdio.h>
main()
{
int a,b;
int c;
char ch,yes;

do
{
printf("Select an operation:\n 1.Add\n 2.Substract\n 3.Multiply\n 4.Divide\n 5.Mod\n");
scanf(" %c",&ch);
printf("Enter first number: ");
scanf("%d",&a);
printf("Enter second number: ");
scanf("%d",&b);
c=0;
switch(ch)    
{
  case '1':
  c=a+b;
  ch='+';
  break;
             
  case '2':
  c=a-b;
  break;
       
  case '3':
  c=a*b;
  ch='*';
  break;
             
  case '4':
  c=a/b;
  ch='/';
  break;
             
  case '5':
  c=a%b;
  ch='%';
  break;
  default:
  printf("Invalid operation.\n");
}
printf("\n %d %c %d = %d\n",a,ch,b,c);
    printf("do u continue(y/n)");
    scanf("%s",&yes);
}while(yes=='y'||yes=='Y');
}
