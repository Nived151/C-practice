#include<stdio.h>
int main(){
    int n,m,temp;
    scanf("%d",&n);
    m=n;
    int i,l=1;
    for(i=0;i<n;i++){
        if(n/10!=0){
            l+=1;
            n=n/10; 
        }
    }
    int a[l];
    for(i=l-1;i>=0;i--){
        a[i]=m%10;
        m=m/10;
    }
    temp=a[0];
    a[0]=a[l-1];
    a[l-1]=temp;
    for(i=0;i<l;i++) printf("%d",a[i]);
}