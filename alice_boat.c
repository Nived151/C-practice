#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,c,m;
    scanf("%d%d%d",&n,&c,&m);
    int i, arr[n],max_arr=0,max;
    max=m*c;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if (arr[i] > max_arr)
                 max_arr = arr[i];
    }
    if(max>=max_arr){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}