#include<stdio.h>
int main(){
    int n;
    printf("enter no of numbers to enter");
    scanf("%d",&n);
    int a[n],i,j,temp;
    printf("enter numbers");
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    //for(i=0;i<n;i++) printf("%d ",a[i]);
    printf("second largest number is %d",a[n-2]);
}