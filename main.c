// simple calculator
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void add(int a, int b) { printf("Result: %d\n", a + b); }
void substract(int a, int b) { printf("Result: %d\n", a - b); }
void multiply(int a, int b) { printf("Result: %d\n", a * b); }
void divide(int a, int b) { printf("Result: %d\n", a / b); }

int main() {
    int operation;
    int a, b;
    char stop;
    while (true) {
        printf(
    "   Calculator \n"
        "1.Addition \n"
        "2.Substraction \n"
        "3.Multiplication \n"
        "4.Divide \n"
        );
        printf("Choose an operation:");
        scanf("%d", &operation);

        if (operation < 1 || operation > 4) {
            printf("Wrong choice\n");
            continue;
        }
    printf("choose a number:");
        scanf("%d", &a);
        printf("choose a another number:");
        scanf("%d", &b);
        if (operation == 1) {
            add(a, b);
        } else if (operation == 2) {
            substract(a, b);
        } else if (operation == 3) {
            multiply(a, b);
        } else if (operation == 4) {
            divide(a, b);
        }
        printf("Do you want to continue:");
        scanf(" %c", &stop);
        if (stop == 'y' || stop == 'Y') {
            continue;
        } else {
            printf("Goodbye.");
            break;
        }
    }
}