#include<stdio.h>
struct date{
    int day, month, year;
};
struct student {
    char name[50];
    int roll_no;
    struct date DOB;
    struct date DOA;
};
int main() {
    int n, i;
    printf("Enter no. of details to be entered: ");
    scanf("%d", &n);
    struct student s[n];
    for (i=0; i<n; i++) {
        printf("Student %d -\n", i+1);
        char c=getchar();
        printf("Enter name: ");
        gets(s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter day of DOB: ");
        scanf("%d", &s[i].DOB.day);
        printf("Enter month of DOB: ");
        scanf("%d", &s[i].DOB.month);
        printf("Enter year of DOB: ");
        scanf("%d", &s[i].DOB.year);
        printf("Enter day of date of admission: ");
        scanf("%d", &s[i].DOA.day);
        printf("Enter month of date of admission: ");
        scanf("%d", &s[i].DOA.month);
        printf("Enter year of date of admission: ");
        scanf("%d", &s[i].DOA.year);
    } printf("----------------------------------------");
    for (i=0; i<n; i++) {
        printf("Student %d -\n", i+1);
        printf("Name: %s\nRoll Number: %d\nDOB: %d/%d/%d\nDOA: %d/%d/%d\nAge at the time of admission: %d\n", s[i].name, s[i].roll_no, s[i].DOB.day, s[i].DOB.month, s[i].DOB.year, s[i].DOA.day, s[i].DOA.month, s[i].DOA.year, s[i].DOA.year-s[i].DOB.year);
    }
    return 0;
}