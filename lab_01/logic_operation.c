#include <stdio.h>

void main() {
    int a, b, c, choice, result;
    // if not integer read default action
    if (sizeof(choice) == sizeof(int)) 
    {
        while (choice != 3)
        {
            printf("\n 1. Press 1 to perform Logical AND operation");
            printf("\n 2. Press 2 to perform Logical OR operation");
            printf("\n 3. Press 3 to perform Logical NOT operation");

            printf("\n Enter your choice \n");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                printf("Enter 3 numbers \n");
                scanf("%d %d %d", &a, &b, &c);
                result = (a > b) && (a < c); // logical AND
                printf("(a > b) && (a < c) is: %d \n", result);
                break;
            case 2:
                printf("Enter 3 numbers \n");
                scanf("%d%d%d", &a, &b, &c);
                result = (a > b) || (a < c); // logical OR
                printf("(a > b) || (a < c) is: %d \n", result);
                break;
            case 3:
                printf("Enter 2 numbers \n");
                scanf("%d%d", &a, &b);
                result = !(a < b); // logical NOT
                printf("!(a < b) is: %d \n", result);
                break;
            default:
                printf("you have pressed the wrong key");
                printf("\n press any key to continue");
            }
        }
    }
    printf("you have didn't enter a number value");
    printf("\n press a number to select choice");
}