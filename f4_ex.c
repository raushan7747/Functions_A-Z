// C code for function
// with argument but no return value
#include <stdio.h>

void function(int, int[], char[]);

int main()
{
	int x = 250;
	// x = 500;
	int ar[5] = { 10, 20, 30, 40, 50 };
	
	char str[30] = "geeksforgeeks";
		
	// function call
	function(x, &ar[0], &str[0]);
	
	return 0;
}

void function(int a, int* ar, char* str)
{
	int i;
	// a = 200;
	printf("value of a is %d\n\n", a);
	
	for (i = 0; i < 5; i++) {
		printf("value of ar[%d] is %d\n", i, ar[i]);
	}
	
	printf("\nvalue of str is %s\n", str);
}
