#include <stdio.h>
float pi = 3.14;

int circle(int r) {
    double area = pi*r*r;
    return area;
}

int main() {
    printf("area = %d", circle(2));
}