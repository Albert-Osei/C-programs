#include <stdio.h>;
void main() {
    int a[2][3];
    int i, j;

    for (i=0; i<2; i++) {
        for (j=0; j<3; j++) {
            printf("Enter the elements of a[%d][%d] \n", i,j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n matrix is: \n");
    for (i=0; i<2; i++) {
        printf("\n");
        for (j=0; j<3; j++) {
            printf("%3d", a[i][j]);
        }
    }
}