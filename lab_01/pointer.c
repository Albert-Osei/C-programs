#include <stdio.h>
void main() {
    // Assigning variable to pointer

    // int a=5;
    // int *p;
    // p = &a;
    // printf("the pointer variable holding the address of a is %u \n", p);
    // printf("the address of a is %u \n", &a);
    // printf("the value of a is %d", *p);

    // Assigning element of an array to pointer

    int a[5] = {4, 5, 2, 7, 14};
    int i;
    int *p;
    p = &a;
    for (i=0; i<5; i++) {
        printf("the address of %d is = %u \n", *p,p);
        p++;
    }
}