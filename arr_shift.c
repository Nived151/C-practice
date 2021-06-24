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
         b[i]=a[i];}
    scanf("%d",&k);
    while(k){
    temp=b[n-1];
    for(i=n-1;i>0;i--){
        b[i]=b[i-1];}
    b[0]=temp;
    k--;}
    for(i=0;i<n;i++) printf("%d ",b[i]);
    return 0;}