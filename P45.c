#include<stdio.h>
struct item {
    char name[100];
    int quantity;
    float price;
};
int main() {
    struct item i[100];
    char ch='Y', d;
    int x=0, f;
    float amt_total=0;
    do {
        printf("Enter name of item: ");
        scanf("%s", i[x].name);
        printf("Enter price: ");
        scanf("%f", &i[x].price);
        printf("Enter quantity: ");
        scanf("%d", &i[x].quantity);
        printf("Do you want to enter more items: ");
        scanf("%s", &ch);
        x++;
    } while (ch=='Y' || ch=='y');
    for (int j=0; j<x; j++){
        float amt_each=(i[j].quantity * i[j].price);
        printf("Amount for %s = %f\n", i[j].name, amt_each);
        amt_total+=amt_each;
    } printf("Total amount = %f\n", amt_total);
    printf("Do you want to divide the expenses in all the friend: ");
    scanf("%s", &d);
    if (d=='Y' || d=='y') {
        printf("Enter number of friends: ");
        scanf("%d", &f);
        printf("Amount paid by each friend: %f", amt_total/f);
    }
    return 0;
}