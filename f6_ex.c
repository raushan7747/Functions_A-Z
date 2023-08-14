// C code for function with no arguments
// but have return value
#include <math.h>
#include <stdio.h>

int sum();

int main()
{
	int num;
	// int a = 200;
	// num = sum();
	printf("Sum of two given values = %d\n", sum() + 30);
	printf("Since num do not have any values, so the Garbage value is: = %d\n", num);
	return 0;
}

int sum()
{
	int a = 50, b = 80, sum;
	// a = 500;
	// a = sum;
	// a = b;
	// b = 160;
	// b = sum;
	sum = sqrt(a) + sqrt(b);
	return sum;
}
/* jab humara function ka (Arguments) (void) hoga tab humara jo original values honge wah ->
 * Function Definition ke andar honge, -> Yani ki hum apne value ko Function Definition ke
 * andar hi change kar sakte hain jo ki int main() function ke arguments se koi relation nhi
 * rakhega.
 *
 *
 */