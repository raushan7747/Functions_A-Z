// Pointing next values that contains an array
// Array ke agle Address pe Values [INPUT -> OUTPUT] karna

#include <stdio.h>
#include <string.h>

int main()
{
    int st_marks[20];
    int *marks;
    marks = st_marks;

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of marks for student %d\n", i + 1);
        scanf("%d", marks);
        marks++;
    }

    for (int i = 0; i < 4;)

    {
        printf("\nThe the value of marks for student %d is: %d\n\n", i + 1, st_marks[i]);
        i++;
    }
    return 0;
}