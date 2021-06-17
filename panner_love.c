#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    long long int n;
    scanf("%lld",&n);
    int i,a[n],sum=0;
    for(i=1;i<=n;i++){
        scanf("%d%d",&i,&a[i]);
        sum+=i*a[i];
    }
    printf("%d",sum);
    return 0;
}