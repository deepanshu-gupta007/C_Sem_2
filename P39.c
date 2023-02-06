#include<stdio.h>
#include<stdlib.h>
int main() {
    char *ch;
    int alpha=0, digit=0, sc=0;
    ch=(char*)malloc(100*sizeof(char));
    printf("Enter a string: ");
    scanf("%s", ch);
    for (int i=0; *(ch+i)!='\0'; i++){
        if ((*(ch+i)>64 && *(ch+i)<90) || (*(ch+i)>96 && *(ch+i)<123))
            alpha++;
        else if (*(ch+i)>'0' && *(ch+i)<'9')
            digit++;
        else sc++;
    }
    printf("Alphabets = %d\nDigits = %d\nSpecial Characters = %d", alpha, digit, sc);
    return 0;
}