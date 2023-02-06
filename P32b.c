#include<stdio.h>
struct students {
    char name[20], sec[2];
    int roll_no, class;
};
int main () {
    int n, i;
    printf("Enter no. of details to be entered: ");
    scanf("%d", &n);
    struct students s[n];
    for (i=0; i<n; i++) {
        printf("Student %d -\n", i+1);
        char c=getchar();
        printf("Enter name: ");
        gets(s[i].name);
        printf("Enter section: ");
        gets(s[i].sec);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter class: ");
        scanf("%d", &s[i].class);
    } printf("----------------------------------------"); 
    for (i=0; i<n; i++) {
        printf("Student %d -\n", i+1);
        printf("Name: %s\nSection: %s\nRoll No.: %d\nClass: %d\n", s[i].name, s[i].sec, s[i].roll_no, s[i].class);
    }
    return 0;
}