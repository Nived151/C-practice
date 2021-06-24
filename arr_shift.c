#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,k;
    scanf("%d",&n);
    int a[n],i,temp,b[n];
    for (i=0;i<n;i++){
         scanf("%d",&a[i]);
         b[i]=0;}
    scanf("%d",&k);
    while(k){
    temp=a[n-1];
    for(i=n-1;i>0;i--){
        b[i]=a[i-1];}
    b[0]=temp;
    k--;}
    for(i=0;i<n;i++) printf("%d ",b[i]);
    return 0;}