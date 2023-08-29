// Scanset is the set to be scanned -> scanf("%[A-Z]s", char_array)

#include <stdio.h>
#include<string.h>
int main()
{

    char array[100];

    // scanf("%d", array);
    // scanf("%[1,2,3,4,5,6,7,8,9,0]", array);

    puts("Please Enter these selected alphabets first -> [l,o,s,t]");
    scanf("%[, ,l, o, s, t]", array);
    puts(array);
    // printf("%s", array);



    // int testing; // works with only strings of an array, not integers
    // scanf("%[1,9,6]", &testing); sirf ik %s hi format specifier hai jo sabhi data types store karta hai
    // printf("%d", testing); // square brackets ke andar [ ] hum conditions laga sakte hain, jaise %[ ^\n, A-Z, a-z]


    return 0;
}