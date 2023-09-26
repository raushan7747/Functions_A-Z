#include <stdio.h>
#include <stdlib.h>
// Functions prototypes:
char *takeChar2(FILE *sqlSyntax, char mode[2], char dynamicFile[50]);
char *takeChar(FILE *sqlSyntax, char mode[2], char dynamicFile[50]);
char *dbTable(FILE *sqlSyntax, char mode[2], char dynamicFile[50]);
char *dbNaming(FILE *sqlSyntax, char mode[2], char dynamicFile[50]);

// Function Definition to take Characters from User
char *takeChar2(FILE *sqlSyntax, char mode[2], char dynamicFile[50])
{
    sqlSyntax = fopen(dynamicFile, mode); // Dynamically opening a file, input given by the user

    int charSize;
    printf("Enter the size of Characters how much you needed for your VALUES: ");
    scanf("%d", &charSize);
    char *array;                                           // Need to have pointer to Address the Memory to Allocate needed space to perform
    array = (char *)malloc((charSize + 1) * sizeof(char)); // +1 for storing the Null character '\0'
    // To check the memmory Allocation is done or not
    if (array == NULL)
    {
        printf("Memory not Allocated, Insufficient space: \n");
        return NULL;
    }

    // taking inputs
    char characters;
    printf("Now Enter your Characters from here: ");
    for (int i = 0; i < charSize; i++)
    {
        scanf("%c", &characters);
        array[i] = characters;
    }
    for (int i = 0; i < charSize; i++)
    {
        printf("%c", array[i]); // Prints into the file
    }
    // fprintf(sqlSyntax, "\n"); // Prints new line after printing the character array into the file
    array[charSize] = '\0'; // Adding Null value, to the characters of an array
    printf("\n\n");
    return array;

} //  takeChar2();

// Function Definition to take Characters from User
char *takeChar(FILE *sqlSyntax, char mode[2], char dynamicFile[50])
{
    sqlSyntax = fopen(dynamicFile, mode); // Dynamically opening a file, input given by the user

    int charSize;
    printf("Enter the size of Characters how much you needed for your TABLE: ");
    scanf("%d", &charSize);
    char *array;                                           // Need to have pointer to Address the Memory to Allocate needed space to perform
    array = (char *)malloc((charSize + 1) * sizeof(char)); // +1 for storing the Null character '\0'
    // To check the memmory Allocation is done or not
    if (array == NULL)
    {
        printf("Memory not Allocated, Insufficient space: \n");
        return NULL;
    }

    // taking inputs
    char characters;

    printf("Now Enter your Characters from here: ");
    for (int i = 0; i < charSize; i++)
    {
        scanf("%c", &characters);
        array[i] = characters;
    }
    for (int i = 0; i < charSize; i++)
    {
        printf("%c", array[i]); // Prints into the file
    }
    // fprintf(sqlSyntax, "\n"); // Prints new line after printing the character array into the file
    array[charSize] = '\0'; // Adding Null value, to the characters of an array
    printf("\n\n");
    return array;

} // takeChar();

// Function Definition for Making Tables defined by user
char *dbTable(FILE *sqlSyntax, char mode[2], char dynamicFile[50])
{
    sqlSyntax = fopen(dynamicFile, mode); // Dynamically opening a file, input given by the user

    // Creating DataBase
    printf("Creating Your Table\n");
    // Taking DataBase Name From User
    char *dbName;
    int dbSize;
    char dbValues;
    printf("Enter the size of your Table Name: ");
    scanf("%d", &dbSize);
    dbName = (char *)malloc((dbSize + 1) * sizeof(char)); // +1 for storing the Null character '\0'
    printf("Start naming your Table right now: ");
    int arrSize = 0;
    for (; arrSize < dbSize; arrSize++)
    {
        scanf("%c", &dbValues);
        dbName[arrSize] = dbValues;
    }
    printf("\n");
    for (; arrSize < dbSize; arrSize++)
    {
        printf("%c", dbName[arrSize]);
    }
    dbName[arrSize] = '\0'; // This will add the Null character at the end of the characters
    // This will make our program safe from printing Null values, and make a sense to the compiler
    // that, there will our character Terminated.
    printf("\n");
    return dbName;
} //  dbTable();

// Function Definition for the DataBase Naming
char *dbNaming(FILE *sqlSyntax, char mode[2], char dynamicFile[50])
{

    sqlSyntax = fopen(dynamicFile, mode); // Dynamically opening a file, input given by the user
    // Creating DataBase
    printf("Creating first Database\n");
    // Taking DataBase Name From User
    char *dbName;
    int dbSize;
    char dbValues;
    printf("Enter the size of your DataBase Name: ");
    scanf("%d", &dbSize);
    dbName = (char *)malloc((dbSize + 1) * sizeof(char)); // +1 for storing the Null character '\0'
    printf("\n");
    printf("Start naming your DataBase right now: ");
    int arrSize = 0;
    for (; arrSize < dbSize; arrSize++)
    {
        scanf("%c", &dbValues);
        dbName[arrSize] = dbValues;
    }
    for (; arrSize < dbSize; arrSize++)
    {
        printf("%c", dbName[arrSize]);
    }
    dbName[arrSize] = '\0'; // This will add the Null character at the end of the characters
    // This will make our program safe from printing Null values, and make a sense to the compiler
    // that, there will our character Terminated.
    return dbName;
} // dbNaming();

int main()
{
    FILE *sqlSyntax = NULL; // Need to have pointer to Address the Memory Current directory to handle complete Directory(Folder)
    // making NULL pointers is the best practice
    // Taking mode by user
    char mode[2];
    char dynamicFile[50];
    printf("Open the file in write or append mode first using (w),(a) to create a new file\n");
    printf("Enter the mode in which you want to open: (w, a)\n");
    scanf("%2s", mode);
    // dynamcilly file taking from user
    printf("Enter the file name in which you want to save your data: ");
    scanf("%s", dynamicFile);             // taking file name
    sqlSyntax = fopen(dynamicFile, mode); // Dynamically opening a file, input given by the user
    if (sqlSyntax == NULL)
    {
        perror("File opening failed");
        return 1;
    }
    // fscanf(sqlSyntax, "%[a-z, A-z, ,0-9,\n,]", read);
    // Taking characters dynamically by the user

    char *dynamicChar = NULL; // Need to have pointer to Address the Memory to Allocate needed space to perform
                              // Taking size for dynamically memory allocation
    unsigned long int sizeAlloc;
    printf("Enter the size of bytes you need to have for your Documentation (comments): ");
    scanf("%ld", &sizeAlloc);
    // Initializing a pointer with NULL values, which points to the HEAP
    dynamicChar = malloc((sizeAlloc + 1) * sizeof(char)); // +1 for storing the Null character '\0'
    printf("Now give the characters you want: ");

    for (int i = 0; i < sizeAlloc; i++)
    {
        char charTaking;
        scanf("%c", &charTaking);
        // scanf(" %c", &charTaking); // For consuming white-spaaces, means white spaces no to be count in bytes -->
        // If white-spaces not to be counted then, we do not able to add spaces in Our Inputs, they'll just print Characters -->
        // But, there's I wanna have seperately spaces as given by the user.
        dynamicChar[i] = charTaking; // Scanned values will be stored in this pointer making an array
    }
    for (int i = 0; i < sizeAlloc; i++)
    {
        printf("%c", dynamicChar[i]);             // Prints into the file
        fprintf(sqlSyntax, "%c", dynamicChar[i]); // Prints into the file
    }
    dynamicChar[sizeAlloc] = '\0';
    fprintf(sqlSyntax, "\n"); // printing next line after the Characters loop ended into the file
    printf("\n");

    // Making a Pointer which stores the value of [dbNaming()] function:
    // Function to take your DataBase Name
    char *return_dbNaming = NULL; // Need to have pointer to Address the Function to perform their task
    return_dbNaming = dbNaming(sqlSyntax, mode, dynamicFile);
    printf("\n");
    fprintf(sqlSyntax, "CREATE DATABASE IF NOT EXISTS %s;", return_dbNaming); // Garbage value - Error

    fprintf(sqlSyntax, "\n"); // Prints next line into the file
    // Using Databasae, making Schemas
    printf("\n\n");
    // Function to take your Database Name to USE building your Schema
    fprintf(sqlSyntax, "USE %s;", return_dbNaming);
    fprintf(sqlSyntax, "\n");

    // printing format to create a table
    printf("\nSyntax to create a Table is: Column_Name Field_types Constraints, so on: \n");
    printf("\nThis is an Example of Creating Table: \n");
    printf("\nCREATE TABLE googleEmployees\n\n");
    printf("(EMP_id VARCHAR(20) PRIMARY KEY, Branch VARCHAR(15) , Salary INT NOT NULL DEFAULT 30000 ); \n\n");
    // Printing an example to insert
    printf("INSERT INTO googleEmployees (EMP_id, Branch, Salary) VALUES ('196', 'LAKHISARAI', 30000);\n\n");

    // Creating TABLES
    // Taking input from user how many tables he want to print out in their SQL Query
    printf("Please let me know, how many TABLES & VALUES you needed to have, please enter(1 - n): ");
    long int printTables;
    scanf("%ld", &printTables);
    // declaring pointers, which points to the function returned-type values and will store it to the new variable
    char *charTaking = NULL;     // Just Taking charters as where I need to have
    char *return_dbTable = NULL; // Need to have pointer to Address the Function to perform their task
    char *charTaking2 = NULL;    // Just Taking charters as where I need to have

    for (int i = 0; i < printTables; i++)
    {
        return_dbTable = dbTable(sqlSyntax, mode, dynamicFile);
        charTaking = takeChar(sqlSyntax, mode, dynamicFile);
        fprintf(sqlSyntax, "CREATE Table IF NOT EXISTS %s ( %s );", return_dbTable, charTaking);
        fprintf(sqlSyntax, "\n"); // print next line to the file
        // printing VALUES into the TABLE
        charTaking2 = takeChar2(sqlSyntax, mode, dynamicFile);
        fprintf(sqlSyntax, "INSERT INTO %s", return_dbTable); // Prints into the file
        fprintf(sqlSyntax, "VALUES ");                        // Prints into the file
        fprintf(sqlSyntax, " (");                             // Prints into the file
        fprintf(sqlSyntax, "%s", charTaking2);                // Prints into the file
        fprintf(sqlSyntax, " );");                            // Prints into the file
        fprintf(sqlSyntax, "\n");                             // print next line to the file
    }
    free(charTaking);       // making free the pointer help to use again and again memory
    free(charTaking2);     // making free the pointer help to use again and again memory
    free(return_dbNaming);   // making free the pointer help to use again and again memory
    free(return_dbTable);   // making free the pointer help to use again and again memory
    free(charTaking);      // making free the pointer help to use again and again memory
    free(charTaking2);    // making free the pointer help to use again and again memory

    free(dynamicChar); // making free the pointer help to use again and again memory
    fclose(sqlSyntax);

    return 0;
} // main
