// Pointing next values that contains an array
// Array ke agle Address pe Values [INPUT -> OUTPUT] karna

#include <stdio.h>
#include <string.h>

int main()
{
    int st_marks[20]; // This will store about 20 marks of an Student only.
    // st_marks[0] = 455;   /* Bina loop ke hum is tarah se values apne array ke andar daal rhe honge
    // st_marks[1] = 454347;  * aur phir agar hume user se lena ho in Values ko to hum is tarah se lenge->
    // st_marks[2] = 45237;  * Scanf("%d", st_marks[0]);
    // st_marks[3] = 455887;  * Scanf("%d", st_marks[1]);
    // st_marks[4] = 414787;  * Scanf("%d", st_marks[2]); --> Yani ki hum LOOP se aasani se apne ARRAYS ko input/output karwa sakte

    int *marks;       // Declaring Pointsers
    marks = st_marks; // Addressing the initial value of the [ARRAY]

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of marks for student %d\n", i + 1); // Stdent 0 se print n ho isilye bas Hum [i+1] kar rhen
        scanf("%d", marks); // yahan hum apne inputs user se lekar apne Array me store directly nhi karwayenge, woh kyun dekhte hain -> 
                            // scanf("%d", st_marks); Agar hum apne pointer VAriable me store n karakar agar apne [ARRAY] store ->
                            // karwate hain to humari value, us array ke andar store to ho jayengi, LEKIN SIRF AUR SIRF AAKHRI ->
                            // VALUE HI STORE HOGI, HUM JITNI BAAR APNI VALLUE DENGE WAH BAS IK HI ADDRESS PE STORE HONGI AUR ->
                            // HUMESHA WAHIN PE VALUES CHANGE HOTE RAHGENG [ KYUNKI, ARRAY ik tarah ka Pointer hi hai] AUR ->
                            // HUM JITNI BAAR VALUES ENTER KARTE JAYENGE WAH CHANGE HOTE JAYENGE, AUR SABSE AAKHRI VALUE ->
                            // US IK HI ADDRESS PE STORE HOGI. For Example - st_marks[0] = 455;
                            // Hum sirf ik hi array me values ko change karte jayenge, st_marks[0] = 455; isme abhi [455] value hai ->
                            // agli baar value dalne pe wah bhi st_marks[0] = [CHANGING VALUES]; isi jagah store hote jayenge ->
                            // aur agar aakhri me humne iski value daali st_marks[0] = 54875; To values change hote hote ->
                            // jo aakhri value hogi [54875] wahi print hokar aayega.
                            // To hum aisi galti nhi karenge, aur user se input Pointer variable me store karenge, aur us pointer me ->
                            // jo address hoga wahan humare values jaakr store ho jayenge, uske baad jab hum apne pointer ko [marks + 1]
                            // is tarah se badhayenge to wah next address pe humari Values ko store karta jayega, aur humari values ->
                            // Array ke us Contiguous memory Location pe jaakar [Pointer Variables ke andar store hue ADDRESS] store ->
                            // ho jayenge, Jisse hum apne array ki values "st_marks" [Ya Pointer (*) variable ke andar store hue values]
                            // ko agar print karenge to hum saare Values ko Contiguos memory location pe store bhi kar payenge aur print bhi.

        marks++;
    }

    for (int i = 0; i < 4;)

    {
        printf("\nThe the value of marks for student %d is: %d\n\n", i + 1, st_marks[i]);
        i++;
    }
    return 0;
}