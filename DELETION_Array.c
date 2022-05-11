#include<stdio.h>
#include<conio.h>
void main(){
    int a[50],n,i,del;
    printf("Enter the No. of element");
    scanf("%d",&n);
    printf("Enter the Element");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the Index for Deletion");
    scanf("%d",&del);
    for(i=del;i<n;i++){
        a[i]=a[i+1];
    }
    printf("After the Deletion\n");
    for(i=0;i<n-1;i++){
        printf("%d\n",a[i]);
    }
}
