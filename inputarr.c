#include<stdio.h>
int main(){
    int n;
    printf("enter no of numbers to enter");
    scanf("%d",&n);
    int a[n],i,j;
    printf("enter numbers");
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    for(i=0;i<n-1;i++){
        for(j=0;j<n;j++){
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    printf("second largest number is %d",a[n-2]);
}