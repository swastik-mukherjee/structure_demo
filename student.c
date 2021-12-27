#include<stdio.h>

struct address{
    int st_no;
    char st_name[10];
    char district[40];
    char state[40];
    int pin;
};
struct student{
    int roll_no;
    char name[50];
    struct address add;
    struct demo
    {
        /* data */
    };
    
    
};


int main()
{

    struct student s1, s2;

    s1.add.pin = 742225;

    printf("Enter the Name and roll no of S1 : ");
    scanf("%s", s1.name);
    scanf("%d", &s1.roll_no);

    printf("Enter the Name and roll no of S2 : ");
    scanf("%s", s2.name);
    scanf("%d", &s2.roll_no);

    //Display the attributes

    printf("The Name of first student : %s\n The roll no of the student is %d", s1.name, s1.roll_no);
    printf("\nThe Name of second student : %s\n The roll no of the student is %d", s2.name, s2.roll_no);

}