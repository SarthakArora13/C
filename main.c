//reinitializing the static variable.
#include<stdio.h>
#include<conio.h>
static int a=10;
void stat(){
    static int b=20;
    printf("The inital value is %d\n",b);
    b++;
    printf("\nThe Incremented value is %d\n",b);
    b=a;
    printf("\nReinitialize value is %d\n",b);
}
void main(){
   stat(); 
   static int c=30;
   printf("\n%d",c);
   c=a;
   printf("\n%d\n",c);
}