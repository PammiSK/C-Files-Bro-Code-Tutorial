#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[10];
    float gpa;
} student;

int main()
{
    student A = {"abc", 5.0};
    student B = {"def", 4.5};
    student C = {"mno", 4.0};
    student D = {"xyz", 3.5};

    student studS[] = {A, B, C, D};

    for (int i = 0; i < sizeof(studS) / sizeof(studS[0]); i++)
    {
        printf("Name: %-5s\t", studS[i].name);
        printf("GPA: %.2f\n", studS[i].gpa);
    }
    return 0;
}