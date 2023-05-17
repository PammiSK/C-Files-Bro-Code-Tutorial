#include <stdio.h>

int main()
{
    // Write File + Append + Delete
    FILE *pF = fopen("test_file.txt", "w");
    /*
    datatype = FILE
    pointer to file = *pF
    open file with fopen();
    modes: w - write (write new file/overwrite file), a - append(add to file without overwriting), r - read(read only)
    Relative file path = test_file.txt
    Absolute file path = C:\\Users\\ppcsm\\Documents\\C Files\\test_file.txt -> all \ becomes \\
    ABS FP offers control over file location
    */

    fprintf(pF, "\nSpeed of Light");

    /*
    Append file
    FILE *pF = fopen("test_file.txt", "a");
    fprintf(pF, "\nSpeed of Light");
    */

    fclose(pF); //  close file with fclose();

    /*
    if (remove("test_file.txt") == 0)
    {
        printf("File deleted sucessfully!");
    }
    else
    {
        printf("file not deleted");
    }
    */

    // READ file

    FILE *pF2 = fopen("test_file2.txt", "r"); // ABS FP = C:\\Users\\ppcsm\\Documents\\C Files\\test_file2.txt
    // Use ABS FP if file to read (or write / append) is not in the same folder of prog.
    char buffer[255]; // acts as a container, an array of characters to hold 1 line of text at a time
    printf("Read 1 line only:\n");
    fgets(buffer, 255, pF2); // 3 arguments - buffer variable, max. i/p size, pointer to file opening
    printf("%s", buffer);

    if (pF2 == NULL) // to check if the file exists in the first place
    {
        printf("Unable to open file");
    }
    else
    {
        printf("\nRead until end of file:\n");
        while (fgets(buffer, 255, pF2) != NULL) // reads file until fgets does not return NULL, if NULL is returned it means end of file
        {
            printf("%s", buffer);
        }
    }

    fclose(pF2);
    return 0;
}