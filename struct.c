#include<stdio.h>
struct student
{
    int  roll_no;
    char name[20];
    float marks;
};

int main()
{
    struct student s1;
    printf("Enter student details:");
    scanf("%d%s%f",&s1.roll_no,&s1.name,&s1.marks);
    printf("Roll_no %d\nName %s\nmarks %2f",s1.roll_no,s1.name,s1.marks);
    return 0;
}
