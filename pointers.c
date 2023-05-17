#include <stdio.h>

void printAge(int age)
{
    printf("\nYou are %d years old", age);
}

void printpAge(int *pAge)
{
    printf("\nYou are %d years old", *pAge); // dereference
}

int main()
{
    /*
    pointer - 'variable-like' reference that holds memory address to another variable, array, etc.
    some tasks are easier with pointers
    * -> indirection operator (value at address)

    Benefits include:
    less time in prog. exe.
    working on original variables
    can use to create data structures
    return multiple values from fn.s
    search and sort large data array
    dynamic mem. allocation
    */

    int age = 28; // variable has value and address
    printf("int age = 28\n");
    printf("Address of age: %p", &age);
    printf("\nValue of age: %d", age);
    printAge(age);

    int *pAge = NULL;                               // datatype of pointer should be equal to datatype of variable it is pointing to
    pAge = &age;                                    // same as int *pAge = &age;, good practice to assign NULL when declaring pointer
    printf("\n\nint *pAge = NULL");
    printf("\nValue of pAge: %p", pAge);            // pointer has its own address and the value stored in it is an address
    printf("\nValue at stored address: %d", *pAge); // extract value at given address within the pointer
    printpAge(pAge);                                // passing pointer as argument to a fn

    printf("\n\nSize of age: %d", sizeof(age));
    printf("\nSize of pAge: %d", sizeof(pAge));

    return 0;
}