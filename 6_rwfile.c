#include <stdio.h> 
struct s
 {
  char name[50];
   int height;
 };
 int main()
 { 
	 struct s a[5],b[5];
	  FILE *fptr; 
	  int i,n;
	  fptr=fopen("file.txt","wb");
	  printf("Enter no. of students");
	  scanf("%d",&n);
     for(i=1;i<=n;++i)
	 {
		 fflush(stdin);
		  printf("Enter name: ");
	   gets(a[i].name);
	    printf("Enter height: "); 
		scanf("%d",&a[i].height); 
	} 
	fwrite(a,sizeof(a),1,fptr);
	 fclose(fptr); 
	 fptr=fopen("file.txt","rb");
	  fread(b,sizeof(b),1,fptr);
	  printf("*** Student details are ***");
	   for(i=1;i<=n;++i) 
	   {
    	    printf("\nStudent--%d\tName: %s\tHeight: %d\n",i,b[i].name,b[i].height);
		 }
  fclose(fptr);
}
