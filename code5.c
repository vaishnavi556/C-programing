#include<stdio.h>
#include<string.h>
main()
{
	int h,m,s;
	a:printf("enter time in HH:MM:SS");
	scanf("%d%d%d",&h,&m,&s);
	if(h>=0 && h<=24 && m<=60 && s<=60 && m>=0 && s>=0)
	{
	printf("time is %d hrs %d mins %d secs",h,m,s);
	}
	else
	{
		printf("enter a valid time\n");
		goto a;
	}
}
