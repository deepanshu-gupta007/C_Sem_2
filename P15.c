#include<stdio.h>
int main() {
    char a[50];
    printf("Enter a string: ");
    gets(a);
    int i, v=0, c=0, d=0, ss=0, ws=0;
    for (i=0; a[i]!='\0'; i++) {
        if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U') v++;
        else if ((a[i]>64 && a[i]<91) || (a[i]>97 && a[i]<123)) c++;
        else if (a[i]>47 && a[i]<58) d++;
        else if (a[i]==' ') ws++;
        else ss++;
    } printf("No. of vowels = %d\nNo. of constants = %d\nNo. of digits = %d\nNo. of white space = %d\nNo. of special symbols = %d\n", v, c, d, ws, ss);
    return 0;
}