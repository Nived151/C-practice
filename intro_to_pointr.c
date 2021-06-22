#include<stdio.h>
#include<string.h>
#include<stdlib.h> //this library contains the function malloc.
int main()
{
	int *var = (int*) malloc(sizeof(int));//allocating memory to a new int pointer

	scanf("%d",var); //store the input to var. recall that a pointer is address itself so you
	//do not need to use the ampersand '&' (address of) sign.
	printf("%d",*var);//print the variable var here. again, recall that you need to use the 
	//indirection/dereference operator '*' to access a pointers value.	
	return 0;
}