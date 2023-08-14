// C Program to implement
// Call by reference
#include <stdio.h>

// Call by reference -> FUNCTION PROTOTYPE
void swap(int *x, int *y) // [ * ] means Value at address; yeh us Address pe jo values store honge
						  // us values ki address ko point karta hai, jise hum orininal Vallue
						  // bhi change kar sakte hain
{
	printf("The copy value form main() function is here's, value of x: %d\n\n ", *x); // Jaisa ki hum upar dekh sakte hain upar me humne kahin bhi
																					  // kisi Variable ko declare nhi kiya, aur n hi usme koi value  
																					  // dala phir bhi humare [x, y] me Values [ main () ] Function se
																					  // copy hokar aa gye, jise hum aasani se console pe print kr skte.
	printf("The copy value form main() function is here's, value of y: %d\n\n ", *y);

	// Function Definition

	int temp = *x;
	printf("The value of x is: %d \n\n", *x);
	printf("The value of temp is: %d \n", temp);
	*x = 4344;
	// *x = *y;
	*y = temp;
}

// Driver Code
int main() // koi Bhi compiler Code ka execution 1st line se karta hai, aur hum apne comiler ko jaise hi batate upar me ki humne kisi function ko define
			// kiya hai toh wah apne hisab se manage kar leta hai, uske baad jab [ main () ] Function ke paas jaakar Fucntion Call ko dekhta hai to wah
			// sabse pehle humare Funtion ke Definition wale part ko dhoondhta, phir usme [ main () ] ke variablse se Values copy karke us Function ke Arguments
			// ko deta hai, Lekin [ main () ] ke values humesha [main ( )] ke pass hi hote, Lekin Jab hum ( * ) [ Value at the address of ] sign ka use karte hain 
			// to hum direct (Address ki help se) [ main () ] ke andar ke declared Variables ke andar apne Values ko rakh sakte hai.
			// ( * ) is symbol ka matlab hai, jiska hum Value nikalna chahte hon -> Pointer type Variable se (ex- *x), is tarah ke pointers ke andar kisi n kisi ka
			// values jaroor store hoga aur us Value ko hum nikalne ke liye (*) is sign ka use karte hain
			// ( * ) means [ VALUE AT THE ADDRESS OF ]
{
	// Declaring Integer
	int x = 1, y = 5;
	printf("\n\nBefore Swapping: x:%d , y:%d\n\n", x, y);

	// Calling the function
	swap(&x, &y);
	printf("After Swapping: x:%d , y:%d\n", x, y);
	printf("After Swapping: %d ", x);

	return 0;
}
