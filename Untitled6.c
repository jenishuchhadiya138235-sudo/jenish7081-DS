#include<stdio.h>
#include<conio.h>

struct student{
    int rollno;
    char name[20]
};

void main()
{
    struct student s1;

    printf("\n enter roll number:");
    scanf("%d",&s1.rollno);

    printf("\n enter nam:");
    scanf("%s",&s1.name);

    printf("\n studentdata is an follws");
    printf("\n**************");

    printf("\n roll nuber is :%d s1.roll no");
    printf("\n nam is:%s",s1.name);
    getch();
}



