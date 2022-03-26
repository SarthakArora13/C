//writing and reading string to and from a file...
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    FILE *s;
    char a[100];
    int i;
    s=fopen("s.txt","w");
    printf("Enter the String");
    /*gets(a);
    i=strlen(a);*/
    while(strlen(gets(a))>0){
        fputs(a,s);
        fputs("\n",s);
    }
    fclose(s);
    s=fopen("s.txt","r");
    while(fgets(a,99,s)!=NULL{
        printf("%s",a);
    }
    fclose(s);
}
