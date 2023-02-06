#include<stdio.h>
struct address {
    int street_no, pin_code;
    char state[50], city[50]; 
};
struct employee {
    char name[20];
    int salary;
    struct address ADD;
};
int main() {
    int n, i;
    printf("Enter no. of details to be entered: ");
    scanf("%d", &n);
    struct employee e[n];
    for (i=0; i<n; i++) {
        printf("Employee %d -\n", i+1);
        char c=getchar();
        printf("Enter name: ");
        gets(e[i].name);
        printf("Enter salary: ");
        scanf("%d", &e[i].salary);
        printf("Enter street number: ");
        scanf("%d", &e[i].ADD.street_no);
        printf("Enter city: ");
        char d=getchar();
        gets(e[i].ADD.city);
        printf("Enter state: ");
        gets(e[i].ADD.state);
        printf("Enter pin code: ");
        scanf("%d", &e[i].ADD.pin_code);
    } printf("----------------------------------------");
    for (i=0; i<n; i++) {
        printf("Employee %d -\n", i+1);
        printf("Name: %s\nSalary: %d\nStreet Number: %d\nCity: %s\nState: %s\nPin Code: %d\n", e[i].name, e[i].salary, e[i].ADD.street_no, e[i].ADD.city, e[i].ADD.state, e[i].ADD.pin_code);
    }
    return 0;
}