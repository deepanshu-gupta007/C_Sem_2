#include<stdio.h>
int main() {
    char c[500], r[500], s[500];
    char x='Y', *i=r;
    int count=0, z=0, j, k;
    FILE *f1=fopen("P48a.txt","w+");
    if (f1==NULL)
        printf("File 1 not opened");
    else {
        printf("Enter some content:\n");
        while (x=='Y' || x=='y') {
            scanf(" %[^\n]s",c);
            fputs(c, f1);
            fputs("\n", f1);
            printf("Do you to add more lines: ");
            scanf("%s", &x);
        }
        rewind(f1);
        FILE *f2=fopen("P48b.txt","w+");
        if (f2==NULL)
            printf("File 2 not opened");
        else {
            do {
                i=fgets(r, 500, f1);
                count++;
            } while (i!=NULL);
            rewind(f1);
            for (k=0; k<count-1; k++) {
                i=fgets(r, 500, f1);
                for(j=0; *(i+j)!='\0'; j++){
                    *(i+j)=*(i+j+z);
                    if (*(i+j)==' ')
                        z++, j--;
                }
                z--;
                fputs(r, f2);
            }
            rewind(f2);
            printf("Content in second file:\n");
            for (k=0; k<count-1; k++)
                printf("%s", fgets(s, 500, f2));
            fclose(f2);
        }
        fclose(f1);
        
    }
    return 0;
}