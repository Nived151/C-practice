#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n],i,j,sum=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        sum+=a[i][i]; //first cross
        sum+=a[i][n-i-1];
    }
    if(n%2==0) printf("%d",sum);
    else printf("%d",sum-a[n/2][n/2]);
    return 0;
}