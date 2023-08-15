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

	int temp = *x; // temp khali variable hai jisme hum [x] ke values ko daal rhen, aur isi tarah se hum
				   // [x] me [y] ke values ko dalenge phir, temp me jo [x] ke value the, use [y] me
				   // daal denge, is tarah se hum [x] [y] ki values change kar sakte, aur temp phir se
				   // khali variable reh jayega, jisme sirf GARBAGE value hi bachegi.
	printf("The value of x is: %d \n\n", *x);
	printf("The value of temp is: %d \n", temp);
	// *x = 4344; // yahan se hum directly value ko uske address pe change kar sakte jo ki [ main () ] hai
	*x = *y;
	*y = temp;
	*x = 23; // yahan humne jo value change kiya hai, wah Function call ke baad hi change ho sakta hai, kyunki
			 // Function Call ke baad, humara function step-wise execute hona shuru ho jata hai jaise hum
			 // use apne Function ke andar define karte hain.
			 // yani ki hum keh sakte hain ki, Function bilkul [ main () ] ki tarah hi kaam karta hai
			 // jo kaam hum [ main () ] function ke andar karte hain, wahi kaam hum apne DEFINED function
			 // se bhi karwa sakte hain, bas hume yeh khyal rakhna hai ki, jo Variables hum apne Function
			 // me use kar rhe ho, usi tarah se [ main () ] ke andar Declared variables ka hum use karen
			 // Kyunki har Function ke apne-apne Variables hote hain, aur agar hume [ main () ] ke variables
			 // ke use karne hain to unke variables ko hi hum [FUNCTION CALL] ke waqr apne (Arguments) me
			 // pass kaarenge, na ki use jo humne apne Function me define kiya tha.
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

	printf("The value of [x] in main function before [FUNCTION CALL] is: %d\n", x);
	printf("The value of [y] in main function before [FUNCTION CALL] is: %d\n\n", y);

	printf("\n\nBefore Swapping: x:%d , y:%d\n\n", x, y);

	// Calling the function
	swap(&x, &y);

	printf("The value of [x] in main function after [FUNCTION CALL] is: %d\n", x);
	printf("The value of [y] in main function after [FUNCTION CALL] is: %d\n\n", y);

	printf("After Swapping: x:%d , y:%d\n", x, y);

	return 0;
}
