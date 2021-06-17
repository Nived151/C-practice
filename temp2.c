#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main() {
    int i;
    scanf("%d",&i);
    if((i%3==0)&&(i%5==0)){
        printf("FizzBuzz");
    }
    else if((i%3==0)&&(i!=0)){
        printf("Fizz");
    }
    else if((i%3!=0)&&(i%5==0)){
        printf("Buzz");
    }
    else{
        printf("i");
    }
    return 0;
}