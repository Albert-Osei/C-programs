#include <stdio.h>;

// function definition
void print(int a, int b) {
    int sum;
    sum = a + b;
    printf("sum of two values is = %d \n", sum);
}

int main() {
    void (*p)(int, int) = &print; // assigning pointer to a function
    (*p)(5, 3);
    printf("the pointer variable p holding address of function is %d \n", p);
    printf("the address of the pointer variable is %u \n", print);
    return 0;
}