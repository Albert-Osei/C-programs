#include <stdio.h>;

int product();

void main() {
    printf("the product of the two numbers is: %d", product());
}

int product() {
    int a = 10, b = 5, c;
    c = a * b;
    return c;
}