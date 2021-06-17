#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n],i,j,temp;
    for (i=0;i<n;i++) scanf("%d",&a[i]);
    
    while(k){
        //for left shift by 1
    temp=a[0];
    for(j=0;j<n;j++){
        a[j]=a[j+1];
    }
    a[n-1]=temp;
    k--;
    }
    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}