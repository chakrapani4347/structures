#include<stdio.h>
struct 
{
    int hr;
    int min;
    int sec;
    struct 
    {
        int year;
        int mon;
    
    }d;
}t;

int main()
{
    t.hr = 7;
    t.d.year = 2022;
    printf("Hour :%d\n",t.hr);
    printf("Day : %d\n",t.d.year);
    return 0;
}


