#include<stdio.h>
void copy_string(char*, char*);
main()
{
    char src[100], trg[100];    
    printf("Enter a string\n");    
    gets(src);    
    copy_string(trg, src);    
    printf("copied string is \"%s\"\n", trg);    
    return 0;
}
void copy_string(char *trg, char *src)
{
    while(*src)
    {
        *trg = *src;        
        src++;        
        trg++;
    }    
    *trg = '\0';
}
