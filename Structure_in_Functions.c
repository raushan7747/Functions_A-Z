#include <stdio.h>
#include <string.h>

typedef struct Student_details
{
    char name[20];            // abc
    char student_program[20]; // BCA
    char institute[20];       // SRM University
    char email_id[20];        // abc@gmail
    int student_id;           // 893485
    int roll_no;              // 200
    int batch;                // 2023
    int semester;             // 2
} sts;

void Printing_inputs(sts *);  // taking characters through scanf
void Printing_details(sts *); // taking characters through gets
void student_credentials(sts *);
void StudentEmail(sts *);

int main()
{
    sts students;

    Printing_inputs(&students); // thorugh the pointers, we assign the value in [sts -> name]
    Printing_details(&students);
    student_credentials(&students);
    StudentEmail(&students);
    // Values stored in the [main()] [students] named variable because of using pointers
    printf("\n\n\nThe name of your Student is: %s\n", students.name); // this will print the value which is stored in [sts students]
    printf("The Program of your Student is: %s\n", students.student_program);
    printf("The institute of your Student is: %s\n", students.institute);
    printf("The email_id of your Student is: %s\n", students.email_id);

    return 0;
} // } main()
// Function Definition starts from here:->
void Printing_inputs(sts *student)
{
    // here's we'll take characters thorough user -> by the help of Looops with scanset

    printf("Enter the student Name: ");
    scanf("%[A-Z, a-z, ,]", student->name); // Student is the pointer, which indicates [name -> variable] to store
    // scanf("%[R, a, u, s, h, a, n, , K, u, m, r]", student->name); // Student is the pointer, which indicates [name -> variable] to store
    printf("%s\n", student->name); // This will change the value stored in [name], by using pointers
}
void Printing_details(sts *Student)
{
    // here's we'll take characters thorough user -> by the help of Looops with gets
    printf("Enter the student Program: ");
    // scanf("%[A-Z, a-z, ,]", Student->student_program);
    scanf("%s", Student->student_program); // Here's I'm unable to use [Scanset], check it once again
    printf("%s\n", Student->student_program);
}
void student_credentials(sts *student)
{
    printf("Enter the Student Institute name: ");
    scanf("%s", student->institute);
    printf("%s\n", student->institute);
}
void StudentEmail(sts *Students)
{
    printf("Enter the student email_id: ");
    // strcpy(Students.email_id, "raushanmandallkr@gmail.com"); // The value will be stored in this function only, don't reflect in [main()]
    scanf("%s", Students->email_id);
    printf("%s", Students->email_id);
}