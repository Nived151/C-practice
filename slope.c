#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x1,x2,y1,y2,a1,a2,b1,b2,slope1,slope2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    scanf("%d%d%d%d",&a1,&b1,&a2,&b2);
    slope1=(y2-y1)/(x2-x1);
    slope2=(b2-b1)/(a2-a1);
    if(slope1==slope2) printf("yes");
    else printf("no");
    return 0;
}