/*1. Write a C Program to store and display Name, Age, City, Email Id, Contact of 10 students based on their roll number (which is to be incremented sequentially) using Struct. 
*/
#include<stdio.h>
struct studentdata
{
char name[100];
int rno,age;
char phno[10];
char loc[20];
struct details
{
char add[30];
char email[100];
}d;
}stu[10];
main()
{
int i,n,rno;
printf("Enter no. of Students :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n*** Enter Student %d Details ***\n",i);
printf("\nEnter student %d roll no. :",i);
scanf("%d",&stu[i].rno);
printf("Enter student %d name :",i);
scanf("%s",&stu[i].name);
printf("Enter student %d age :",i);
scanf("%d",&stu[i].age);
printf("Enter student %d phone no. :",i);
scanf("%s",&stu[i].phno);
printf("Enter student %d city:",i);
scanf("%s",&stu[i].loc);
printf("Enter student %d address:",i);
scanf("%s",&stu[i].d.add);
printf("Enter student %d email:",i);
scanf("%s",&stu[i].d.email);
}

printf("\n\nEnter Student Roll no. : ");
scanf("%d",&rno);
for(i=1;i<=n;i++)
{
	if(rno==stu[i].rno)
	{
printf("\n\n*** Student %d Details are ***",i);
printf("\n\nRoll no. : %d",stu[i].rno);
printf("\nName : %s",stu[i].name);
printf("\nAge : %d",stu[i].age);
printf("\nPhone number : %s",stu[i].phno);
printf("\nCity : %s",stu[i].loc);
printf("\nAddress : %s",stu[i].d.add);
printf("\nEmail : %s",stu[i].d.email);
rno=stu[i+1].rno;
}
}
}
