#include<stdio.h>
#include<math.h>
int main(){
    int i,n,flag=0;
    scanf("%d",&n);
    for (i = 2; i < n; i++) {
        if (n % i != 0) {
            flag++;
        }
    }
    printf("%d",flag);
    return 0;
}