#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int*)calloc(1, sizeof(int));
    if (ptr==1) {
        printf("memory is unavailable");
        return 1;
    }
    *ptr=20;
    printf("%d \n", *ptr);
    free(ptr);
    return 0;
}