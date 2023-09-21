#include <stdio.h>
#include <stdlib.h>
char *dbNaming(FILE *);
char *dbTable(FILE *);
// void takeChar(FILE *);

int main()
{
    FILE *sqlSyntax = NULL; // making NULL pointers is the best practice
    // Taking mode by user
    char mode[2];
    char read[50], dynamicFile[50];
    printf("Open the file in write or append mode first using (w),(a) to create new file\n");
    printf("Enter the mode in which you want to open: (w, a)\n");
    scanf("%2s", mode);
    // dynamcilly file taking from user
    printf("Enter the file name in which you want to save your data: ");
    scanf("%s", dynamicFile); // taking file name
    sqlSyntax = fopen(dynamicFile, mode); // Dynamically opening a file, input given by the user
    if (sqlSyntax == NULL)
    {
        perror("File opening failed");
        return 1;
    } 
    // fscanf(sqlSyntax, "%[a-z, A-z, ,0-9,\n,]", read);
    // Taking characters dynamically by the user

    char *dynamicChar = NULL;
    // Taking size for dynamically memory allocation
    int sizeAlloc;
    printf("Enter the size of bytes you need to have for your Documentation (comments): ");
    scanf("%d", &sizeAlloc);
    // Initializing a pointer with NULL values, which points to the HEAP
    dynamicChar = malloc((sizeAlloc + 1) * sizeof(char)); // +1 for storing the Null character '\0'
    printf("Now give the characters you want: ");
    for (int i = 0; i < sizeAlloc; i++)
    {
        char charTaking;
        scanf(" %c", &charTaking);
        dynamicChar[i] = charTaking; // Scanned values will be stored in this pointer making an array
    }
    for (int i = 0; i < sizeAlloc; i++)
    {
        fprintf(sqlSyntax, "%c", dynamicChar[i]);
    }
    dynamicChar[sizeAlloc] = '\0';
    fprintf(sqlSyntax, "\n"); // printing next line after the Characters loop ended
    printf("\n");

    // Making a Pointer which stores the value of [dbNaming()] function:
    // Function to take your DataBase Name
    char *return_dbNaming = NULL;
    return_dbNaming = dbNaming(sqlSyntax);
    printf("\n");
    fprintf(sqlSyntax, "CREATE DATABASE IF NOT EXISTS %s;", return_dbNaming); // Garbage value - Error
    // fprintf(sqlSyntax, ";"); // Terminating a DataBase Naming Query
    fprintf(sqlSyntax, "\n"); 
    // Using Databasae, making Schemas
    printf("\n\n");
    // Function to take your Database Name to USE building your Schema
    fprintf(sqlSyntax ,"USE %s;", return_dbNaming);
    fprintf(sqlSyntax, "\n");
    // Creating TABLES
    char *return_dbTable = NULL;
    return_dbTable = dbTable(sqlSyntax);
    fprintf(sqlSyntax, "CREATE Table IF NOT EXISTS %s", return_dbTable);
    fprintf(sqlSyntax, "\n");
    // printing format to create a table
    printf("Syntax to create a Table is: Column_Name Field_types Constraints, so on: \n");
    printf("This is an Example of Creating Table: \n");
    printf("\nCREATE TABLE googleEmployees\n");
    printf("\n(EMP_id VARCHAR(20) PRIMARY KEY, Branch VARCHAR(15) , Salary INT NOT NULL DEFAULT 30000 ); \n");

    // Inserting Values into the Table
    fprintf(sqlSyntax, "INSERT INTO %s", return_dbTable);

    // Printing an example to insert
    printf(" INSERT INTO googleEmployees (EMP_id, Branch, Salary) VALUES (196, 'LAKHISARAI', 30000);\n");
    // fprintf(sqlSyntax, ";"); // Terminating a DataBase Naming Query

    // printf("Create Schema for the %s Table\n", return_dbTable);
    
    // Taking bytes, how much required for your Schema
    // Taking the Structure of User defined Schema

    // printf("Now, you can start building Schema Syntax from here:\n");
    // takeChar(sqlSyntax);
    // Now Creating more Tables:
    int moreTable;

    // making free the pointer
    free(return_dbNaming);
    free(return_dbTable);
    free(dynamicChar);
    fclose(sqlSyntax);

    return 0;
} // } main

// Function Definition for the DataBase Naming
char *dbNaming(FILE *sqlSyntax)
{
    // Creating DataBase
    printf("Creating first Database\n");
    // Taking DataBase Name From User
    char *dbName;
    int dbSize;
    char dbValues;
    printf("Enter the size of your DataBase Name: ");
    scanf("%d", &dbSize);
    dbName = (char *)malloc((dbSize +1) * sizeof(char)); // +1 for storing the Null character '\0'
    printf("\n");
    printf("Start naming your DataBase right now: ");
    for (int arrSize = 0; arrSize < dbSize; arrSize++)
    {
        scanf(" %c", &dbValues);
        dbName[arrSize] = dbValues;
    }
    printf("\n");
    for (int arrSize = 0; arrSize < dbSize; arrSize++)
    {
        printf("%c", dbName[arrSize]);
    }
    dbName[dbSize] = '\0'; // This will add the Null character at the end of the characters
    // This will make our program safe from printing Null values, and make a sense to the compiler
    // that, there will our character Terminated.
    return dbName;
} // } dbNaming();

// Function Definition for Making Tables defined by user
char *dbTable(FILE *sqlSyntax)
{
    // Creating DataBase
    printf("Creating first Table\n");
    // Taking DataBase Name From User
    char *dbName;
    int dbSize;
    char dbValues;
    printf("Enter the size of your Table Name: ");
    scanf("%d", &dbSize);
    dbName = (char *)malloc((dbSize + 1) * sizeof(char)); // +1 for storing the Null character '\0'
    printf("Start naming your Table right now: ");
    for (int arrSize = 0; arrSize < dbSize; arrSize++)
    {
        scanf(" %c", &dbValues);
        dbName[arrSize] = dbValues;
    }
    printf("\n");
    for (int arrSize = 0; arrSize < dbSize; arrSize++)
    {
        printf("%c", dbName[arrSize]);
    }
    dbName[dbSize] = '\0'; // This will add the Null character at the end of the characters
    // This will make our program safe from printing Null values, and make a sense to the compiler
    // that, there will our character Terminated.
    printf("\n");
    return dbName;
} // } dbTable();

// Function Definition to take Characters from User
// void takeChar(FILE *sqlSyntax)
// {

//     int charSize;
//     printf("Enter the size: ");
//     scanf("%d", &charSize);
//     char *array;
//     array = (char *)malloc((charSize +1) * sizeof(char)); // +1 for storing the Null character '\0'
//     // To check the memmory Allocation is done or not
//     if (array == NULL)
//     {
//         printf("Memory not Allocated, Insufficient space: \n");
//         return;
//     }

//     // taking inputs
//     char characters;
//     int i = 0;
//     int j = 0;
//     for (; i < charSize; i++)
//     {
//         scanf("%c", &characters);
//         array[i] = characters;
//     }
//     for (; j < i; j++)
//     {
//         fprintf(sqlSyntax, "%c", array[j]);
//     }
//     fprintf(sqlSyntax, "\n"); // Prints new line after printing the character array
//     array[characters] = '\0'; // Adding Null value, to the characters of an array
//     return;

// } // } takeChar();
