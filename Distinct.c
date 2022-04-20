#include<stdio.h>
#include<conio.h>
void main(){
    int count=0,num;
    int x,y;
    scanf("%d",&num); //suppose 2
    while(num!=-1){
        x=num; //x=2
        scanf("%d",&num); //3
        //y=num; //y=3
       if((x!=num) && (num!=-1)){ //2!=3
        count++;
       } 
    }
    if(count>=2){
        printf("1");
    }
    else{
        printf("0");
    }
}
