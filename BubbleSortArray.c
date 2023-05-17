#include <stdio.h>

void sortArrayAscend(int array[], int size)
{

    // Bubble sort
    printf("Ascending order:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++) // can also use j < size-i-1
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

void sortArrayDecend(int array[], int size)
{

    // Bubble sort
    printf("Decending order:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] < array[j + 1]) // flip '>' to '<' to reverse sort direction
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void sortArrayCharAscend(char array[], int size)
{

    // Bubble sort
    printf("Ascending order:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++) // can also use j < size-i-1
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printCharArray(char array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%c ", array[i]);
    }
}

void sortArrayCharDecend(char array[], int size)
{

    // Bubble sort
    printf("Decending order:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] < array[j + 1]) // flip '>' to '<' to reverse sort direction
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    printf("Size of array: %d \n", size);
    sortArrayAscend(array, size);
    printArray(array, size);
    printf("\n");
    sortArrayDecend(array, size);
    printArray(array, size);

    // CHARACTER array sort
    char arrayC[] = {'S', 'I', 'V', 'A', 'K', 'U', 'M', 'A', 'R'};
    int sizeC = sizeof(arrayC) / sizeof(arrayC[0]);
    printf("\nSize of CHAR array: %d \n", sizeC);

    sortArrayCharAscend(arrayC, sizeC);
    printCharArray(arrayC, sizeC);
    printf("\n");
    sortArrayCharDecend(arrayC, sizeC);
    printCharArray(arrayC, sizeC);

    return 0;
}