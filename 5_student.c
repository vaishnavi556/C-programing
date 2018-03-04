#include <stdio.h>
#include<stdlib.h>

int main() 
    {

	char name[20],address[40];

	int age,m1,m2,m3,marks,i,n;

	printf("Enter number of students: ");

	scanf("%d",&n);

	FILE *fp1;

	fp1=(fopen("student.txt","w"));

	if(fp1==NULL) {

		printf("Error!");

		exit(1);

	}

	for (i=1;i<=n;i++) {

		printf("For student%d\nEnter name: ",i);

		scanf("%s",name);
		
		printf("Enter address");
		
		scanf("%s",address);
		
		 printf("\nEnter Age: ");

		 scanf("%d",&age);

		  printf("Enter sem 1 percentage: ");

		  scanf("%d",&m1);
		
		  printf("\nEnter sem 2 percentage: ");

		  scanf("%d",&m2);
		
		  printf("\nEnter sem 3 percentage: ");

		  scanf("%d",&m3);
		
		    marks=(m1+m2+m3)/3;

		  fprintf(fp1,"\nName: %s \nAddress: %s \nAge:%d \nMarks=%d \n",name,address,age,marks);

	 }

	 fclose(fp1);

	 return 0;

}

