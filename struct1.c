#include<stdio.h>
struct student
{
    int  roll_no;
    char name[20];
    float marks;
}s1[2];
#define N 2
int main()
{
    for (int i = 1;i <= N;i++)
    {
          printf("Enter student%d details :",i);
          scanf("%d%s%f",&s1[i].roll_no,&s1[i].name,&s1[i].marks);
    }
    for (int i = 1;i <= N;i++)
    {
          printf("Enter student%d details :\n",i);
          printf("Roll_no :%d\nName :%s\nFloat :%2f\n",s1[i].roll_no,s1[i].name,s1[i].marks);
    }
    return 0;
}





