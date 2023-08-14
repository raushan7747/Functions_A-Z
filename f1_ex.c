// C Program to implement
// Call by value
#include <stdio.h>

// Call by value
// int sum(int *x, int y)
int sum(int x, int y) // In this function Return type -> and With Arguments
// Fucntion definition starts here
{
	int c; // yeh variable hum declare kar bhi sakte hain aur nhi bhi, yeh optional hai
		   // Yeh, hum apne code ki Readability ko badhane ke liye declare kar dete hain
		   // taki jo koi bhi humara code padhe use aasani ho ki hum apne is Function ki
		   // value kahan store karwa rhe hain, taaki wah asani se us Variable ka use
		   // karke uske values ka use kar paaye

	c = x + y; // Humne upar me jo do Arguments diye hain Function me Values lene ke liye woh
			   // un values ke saath hum kya karna chahte woh hum apne is FUNCION DEFINITION
			   // me bata sakte hain, For example -> agar hum 2 value ko kisi do Variables me
			   // store karke uska Addition karna chahte hain to woh hum bas is Function definition
			   // ke andar sirf yeh bhi bata sakte hain ki hum apne us Arguments ko kis tarah se use
			   // karna chahte hain, aur humne apne Function me jo 2 Arguments (Function Prototype)
			   // me declare kiye hain wahi 2 variables bhi [ main() ] function ke andar hone chahiye
			   // For exapmpe -> [ c = x + y ] is statement me humne apne Function ke andar bas
			   // Variables ko kis tarah se treat karna hai yeh bataya hai, aur isme jis 2 variables
			   // ke saath ( + ) ho rhe hain use perform karne ke liye Function me bhi 2 Arguments ka
			   // hona jarooori hai taki wah apna apna kaam [ main () ] function ke andar 2 variables
			   // ki values ko dhoondhenge aur jo bhi usme value honge wah, uske saath wahi operation karega.
			   // Humare Function ke andar paass kiye gye Arguments(Value) ke andar value copy hokar aa jate hain
			   // aur us value ki copy ke saath hum apne [ FUNCTION DEFINITION ] ke andar jo kuchh bhi karenge wah
			   // [ main () ] function ke andar bhi usi tarah se kaam karega jis tarah se hum apne [ Function Definition ]
			   // ke andar us values ke saath karenge
			   // For Example ->
			   // int operation(int x, int y, int z); // Function prototype

			   // int operation(int x, int y, int z) // Function Definition
			   // {
			   // Ab jab hum apne Function ko [ main () ] ke andar se call kar rhe honge, hume is baat ka dhyan rakhna chahiye
			   // ki hum Jahan se apne Function ko call kar rhen hon, uske upar utne Variable, aur usme kuchh values jaroor hone chahiye
			   // jo ki copy hokar humare Function ke (Arguments) ke paass ja sake.
			   // Ab hum apne Arguments jaise ki (x, y, z) ke saath agar, is Functin Definition ke andar Addition karenge to
			   // wahi kaam [ main () ] ke andar step-wise hota jayega jaisa ki hum [ FUNCTION DEFINITION ] ke andar define karenge.
			   //    }
			   // operation(x, y, z) // Function call
			   // Function call me hum bas apne arguments pass karenge, aur un Arguments ke saath jo bhi hum [FUNCTION DEFINITION]
			   // ke andar kar rhe honge usi tarah se [main ()] Function ke andar bhi hota jayega.
			   // SUMMARY:
			   // Function bas ik code ka chhota sa part hai jo ki hum Definition ke andar jo bhi steps karenge, woh steps saare 
			   // [ main () ] function ke andar bhi step-wise Execute hote jayenge.

	// Integer value retured
	printf("the value of x: %d\n\n", x); // yahan pe x ka value main () se copy hokar aaya hai
	printf("the value of x: %d\n\n", y); // yahan pe y ka value main () se copy hokar aaya hai
	return c;
}

// Driver Code
int main()
{
	// Integer Declared
	int a = 3, b = 2; // yahan pe jo Values hain (a, b), uski copies humare Function ke Arguments
					  // ke andar copies hokar jayengi
	printf("the value of a: %d\n", a);
	// Function Called
	int c = sum(a, b); // yahan pe jo value hoga wah original value hai
	printf("the value of a: %d\n", a);
	printf("Sum of %d and %d : %d\n", a, b, c);
	printf("the value of a: %d\n", a);

	return 0;
}
