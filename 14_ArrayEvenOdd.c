#include<stdio.h>
main()
{
 int a[100],evn[100],odd[100],n,i,emax,omax,eindex,oindex;
 printf("enter no. of elements in array");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   printf("Enter elements into array");
   scanf("%d",&a[i]);
 }
 eindex=0;
 oindex=0;
 for(i=0;i<n;i++)
 {
   if(a[i]%2==0)
   {
     evn[eindex]=a[i];
     emax=eindex;
     eindex++;
   }
   else
   {
     odd[oindex]=a[i];
     omax=oindex;
     oindex++;
   }
  }
  printf("even array is");
  for(i=0;i<emax;i++)
  {
   printf("%d",evn[i]);
  }
  printf("odd array is");
  for(i=0;i<omax;i++)
  {
   printf("%d",odd[i]);
  }
     