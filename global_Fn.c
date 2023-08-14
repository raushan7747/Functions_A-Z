/*
* Humara Function poori tarah se main () Function se kuchh n kuchh relation rakhta hai
* Function ke 3 parts hote hain, 1st. Return type -> 2nd. Function Variable -> 3rd Function (Arguments)
*
* Function ka 2nd Part -> Name hota hai Function ka joj ki hum kuchh bhi rakh sakte hain(Acc_Vle_rule)
*
* Function ka 1st Part -> Return type ka matlab hai ki, humara Function apna kaam karne ke baad kya return karta hai
* yani ki, humne agar apne Function ko koi kaam karne ko kaha aur wah mujhe koi value laakar de rha hai ->
* Jis value me hum koi bhi change kar sakte hain, Yani ki Return type ka function bilkul ik variable ki tarah kaam ->
* karega jis tarah se ik variable me hum koi value store karte hain aur us variable ka kisi bhi tarah se use kar sakte ->
* Agar hume us variable ka SUM karna chahen to bilkul aasani se kar sakte hain, Aur jab koi function kuchh value return -> 
* Return karta hai to wah, bilkul ik VARIABLE ki tarah act (behave) karega, yani ki hum us function ko call karte waqt hi
* jaise chahe us tarah se hum us Function ke andar store hue value ka kisi bhi tarah se apne [ main() Function ] ke andar ->
* Use kar sakte hain.Hum us function ko call karke uski value ko kisi Variable me store kar sakte hain, ya phir us value ko ->
* hum directly "printf()" function ke andar bhi print karwa sakte hain, aur us function ko hum ik variable ki tarah usme ->
* koi bhi (OPERATIONS -> +, -, *, /, %) in sab operations ko hum us Function ko call karte waqt hi apply kar sakte hain aur ->
* jaise hum kisi integer, ya kisi type ke value ke saath treat karte hain usi tarah se hum uske saath bhi kar sakte hain.
* Retrun type functions me Arguments jitne chahe utne ho sakte hain, lekin usme sirf aur sirf koi ik hi value return kar ->
* kar sakta hai, aur usme jitni chahe variables ke andar, alag alag (sirf) ik hi value store karwa sakte hain.

* Function ka 2nd Part me hi -> Agar humara Function (void) return type ka hua to hum us function ko sirf call karke apne value -> 
* ya tasks ko dekh sakte hain, jo hum us Function se karwana chahte hain, Lekin [ main() Function ] ke andar hum us Function ko ->
* ik variable ki tarah treat nhi kar paeyenge, Aur n hi koi usme changes kar sakte hain sirf aur sirf hum us Function se apna ->
* apna kaam karwa sakte hain, us ka result apne [ main() ] function ke andar Call karke dekh sakte hain, lekin kuchh bhi usme ->
* Modify nhi kar sakte, koi bhi changes bas hum apne [ Function Definition ] ke andar se hi kar sakte hain. 
* (Void ) return type Function me hum, koi bhi value FUNCTION Definition ke andar us ARGUMENTS ke through apne value [main ()] ->
* function ke andar Declared variable ko as ARGUMENTS pass karke usme hum apne values ko bhi [main ()] Function ke andar pass -> 
* karte hain taki jo variable humne apne [main ()] function ke andar Declare kiye hon uski andar ke Values ko us Function ke ->
* saath hum apne kaam kar sakte hain wah chahe koi bhi kaam ho, (LOOPS, printf, scanf, ya baaki ke kuchh bhi FUNCTION ka hi ya) -> 
* (koi bhi operations, jo ki hum apne Function DEFINITION ke andar karna chahte hain ).
*/