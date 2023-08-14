// C code for function with no
// arguments and no return value
#include <stdio.h>

void value(void);

void main() {
// value() + 200; // Hum iske value se koi chherchar nhi kar sakte main () Function ke andar, bas call kar sakte hain.
value();
// printf("The total amount is %f", value());
}

void value(void)
{
	float year = 1, period = 5, amount,
		inrate = 0.12;
		printf("Enter the amount: \n");
		scanf("%f", &amount);
	float sum;
	sum = amount;
	while (year <= period) {
		sum = sum * (1 + inrate);
		year = year + 1;
	}
	printf(" The total amount is :%f", sum);
	// printf(" The total amount is :%f", sum);
}
/* Agar koi Function void type ka hai, Yani ki kuch bhi return nhi karta hai to hum us function ko->
* main () function ke andar, printf() Function ke help se uski value nhi le payenge
* Kyunki humne pehle hi apne Function ko (void) return type rakha hai, yani ki
* Hum us function ke andar aane wale kisi bhi value ko main () ke andar nhi la sakte
*(VOID) return type function rakhne se sabse bara yahi benefits hai ki hum, apne values jise
* Function call ke waqt dekhna chahte hain sirf wahi dekh sakte hain, aur usse bhi bari khasiyat
* yeh hai ki hum (void) return type function ko jab call karte hain to hum sirf wahi dekh sakte hain
* jo ki hum Function Definition me dikhana chahte, aur apne values ko bas hum Function Definition
* me hi change kar sakte.
*
* YANI, ki keh sakte hain ki (void) return type function ke values ko agar hum, main () Function
* me change karna chahe to nhi kar sakte, hum sirf (void) return type function ko call kar sakte 
* hain, aur jo bhi hum apne Function me define karenge wah humara main () function me bhi hume karke 
* de dega, bina koi chherchaar ke, aur n hi koi usme koi changes kar payega kisi bhi tarike se
* chahe POINTERS ka use kare ya kuchh bhi, wah humare value ko change nhi kar sakta main ()
* Function ke andar, sirf aur sirf, FUNCTION DEFINITION me hi changes kiye ja sakte hain.
*/