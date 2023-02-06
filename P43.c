#include<stdio.h>
struct students {
    char name[20];
    int roll_no, m1, m2, m3, tm;
    float am;
};
int main () {
    int n, i;
    printf("Enter no. of details to be entered: ");
    scanf("%d", &n);
    struct students s[n];
    int arr[n];
    for (i=0; i<n; i++) {
        printf("Student %d -\n", i+1);
        char c=getchar();
        printf("Enter name: ");
        gets(s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter marks 1: ");
        scanf("%d", &s[i].m1);
        printf("Enter marks 2: ");
        scanf("%d", &s[i].m2);
        printf("Enter marks 3: ");
        scanf("%d", &s[i].m3);
        s[i].tm=s[i].m1+s[i].m2+s[i].m3;
        s[i].am=s[i].tm/3;
        arr[i]=s[i].tm;
    } printf("----------------------------------------\n"); 
    for(i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if (arr[i]<arr[j]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if (arr[i]==s[j].tm)
                printf("Student Name: %s\tTotal Marks: %d\n", s[j].name, s[j].tm);
        }
    }
    return 0;
}