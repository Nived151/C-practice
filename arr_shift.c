#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,k;
    scanf("%d",&n);
    int a[n],i,temp;
    for (i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);
    while(k){
    temp=a[n-1];
    for(i=n-1;i>0;i--){
        a[i]=a[i-1];}
    a[0]=temp;
    k--;}
    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0;}