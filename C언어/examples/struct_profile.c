#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile
{
    char name[20];
    int age;
    double height;
    char* intro;
};

int main(void)
{
    struct profile yuni;

    strcpy(yuni.name, "ronaldo");
    yuni.age = 17;
    yuni.height = 164.5;

    yuni.intro = (char*)malloc(80);
    printf("introduce : ");
    gets_s(yuni.intro, 80);

    printf("name : %s\n", yuni.name);
    printf("age : %d\n", yuni.age);
    printf("Height : %.1lf\n", yuni.height);
    printf("introduction : %s\n", yuni.intro);
    free(yuni.intro);

    return 0;
}
