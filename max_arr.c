#include<stdio.h>
int main(){
    int n;
    printf("enter no of elements");
    scanf("%d",&n);
    int a[n],i,max=0;
    printf("Enter elements");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("%d",max);
    return 0;
}