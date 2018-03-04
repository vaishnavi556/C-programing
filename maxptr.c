#include<stdio.h>

#include<conio.h>
int *findMax(int arr[],int n);
int main(){
int n,i,*p;
printf("Enter number of data values");
scanf("%d",&n);
int arr[n];

for(i=0;i<n;i++)
{
printf("Enter value %d:",i+1);
scanf("%d",&arr[i]);

}

p=findMax(arr,n);
printf("The max value is: %d",*p);
getch();
return 0;
}

int *findMax(int data[],int n){
int *max=data;
int i;
for(i=1;i<n;i++){
if(*max<*(max+i)) *max=*(max+i);

}
return max;
}

