#include<stdio.h>
int main(){
    int m,n,p,q;
    scanf("%d%d",&m,&n);
    int i,j,a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);}}
    scanf("%d%d",&p,&q);
    int b[p][q];
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            scanf("%d",&b[i][j]);}}
    int r[m][q],k;
    if(n==p){
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                r[i][j]=0;
                for(k=0;k<n;k++){
                    r[i][j]=r[i][j]+a[i][k]*b[k][j];}
            printf("%d ",r[i][j]);}
        printf("\n");}}
    else printf("-1");
	return 0;}