#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *ptr;
    char ch;
    printf("writing to a file \n");
    printf("enter the file contents (press ctrl+D to end) \n");

    ptr = fopen("file1.c", "w");
    // if (ptr == NULL)
    // {
    //     perror("Error opening file for writing");
    //     exit(EXIT_FAILURE);
    // }

    while((ch=getchar()) != EOF) {
        fputc(ch, ptr);
    }
    fclose(ptr);

    printf("reading contents of a file \n");
    ptr = fopen("file1.c", "r");
    // if (ptr == NULL)
    // {
    //     perror("Error opening file for reading");
    //     exit(EXIT_FAILURE);
    // }

    while((ch=fgetc(ptr)) != EOF) {
        printf("%c", ch);
    }
    fclose(ptr);
    getchar();
}