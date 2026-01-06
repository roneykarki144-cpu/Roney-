#include <stdio.h>

int main() {
    char name[30];
    char symbol;
    float money;
    int sum;

    printf("Enter name, symbol+money, and sum:\n");
    scanf("%s %c%f %d", name, &symbol, &money, &sum);

    printf("My name is %s , %c%f and sum is %d",
           name, symbol, money, sum);

    return 0;
}
