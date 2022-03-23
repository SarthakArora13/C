#include<stdio.h>
#include<conio.h>
void main(){
    int unit;
    float total;
    printf("Enter the Units\n");
    scanf("%d",&unit);
    if(unit>=200 && unit<=500){
        total=unit*3.50;
        printf("\nThe Electricity Bill is... %f",total);
    }
    else if(unit>=100 && unit<200){
        total=unit*2.50;
    printf("\nThe Electricity Bill is... %f",total);
    }
    else{
        total=unit*1.50;
        printf("\nThe Electricity Bill is... %f",total);
    }
}