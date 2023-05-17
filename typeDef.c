#include <stdio.h>
#include <string.h>

typedef char user[10];

struct userS
{
    char name[10];
    char password[12];
    int id;
};

// typedef + struct
typedef struct
{
    char name2[10];
    char password2[12];
    int id2;
} userS2;

int main()
{
    // typedef - reserved keyword that gives an existing datatype a nickname, used for convinience

    user user1 = "Siva"; // typedef
    // same as char user1[10] = "Siva"; but it simplifies when using multiple times, commonly used with structures

    struct userS user2 = {"Kumar", "sivakumar", 1080}; // struct

    userS2 user3 = {"sk", "kumarsiva", 1440}; // typedef + struct

    return 0;
    
}