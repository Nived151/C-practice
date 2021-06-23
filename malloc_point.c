#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, N, sum = 0;
	scanf("%d", &N);
	int *arr = (int*) malloc(sizeof(int)*N);
	for (i = 0; i < N; i++) scanf("%d", (arr + i));
	for (i = 0; i < N; i++) sum += *(arr + i); 
	printf("%d", sum);
	return 0;
}