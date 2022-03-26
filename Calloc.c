//#include<alloc.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
void main(){
    int *n,i,j=0;
    printf("Enter the Number of Book");
    scanf("%d",&i);
    n=(int *)calloc(i,sizeof(int));
    while(j!=i){
        scanf("%d",n+j);
        j++;
    }
    j=0;
    while(j!=i){
        printf("\nRates are..%d",*(n+j));
    j++;
        
    }
    free(n);
    printf("\nChecking...%d",*n);
    
}
