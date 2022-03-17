#include<stdio.h>
#include<conio.h>
void main()
{
int p,n;
double r,si;
clrscr();
printf("Enter the principal amount:");
scanf("%d",&p);
printf("Enter the number of years:");
scanf("%d",&n);
printf("Enter the rate of interest:");
scanf("%lf",&r);
si=(p*n*r)/100;
printf("simple interest=%lf",si);
getch();
}
