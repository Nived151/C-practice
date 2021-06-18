#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,k;
    printf("enter n");
    scanf("%d",&n);
    int a[n],i,j,temp;
    printf("enter values of array");
    for (i=0;i<n;i++) scanf("%d",&a[i]);
    printf("enter shift");
    scanf("%d",&k);
    
    while(k){
    temp=a[n-1];
    for(j=n-1;j>0;j--){
        a[j]=a[j-1];
    }
    a[0]=temp;
    k--;
    }
    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}