#include<stdio.h>
#include<string.h>
struct student{
    int age;
    char name[25];
};
int main()
{
    struct student s1={17,"suman raj"};
    printf("Name of student 1:%s\n",s1.name);
    printf("Age of student 1:%d\n",s1.age);
}