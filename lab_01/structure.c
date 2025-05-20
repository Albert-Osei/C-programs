#include <stdio.h>;
struct student {
    char name[18];
    int roll_no;
    int age;
}s1 = {"Samantha", 200, 27};
void main() {
    printf("Student name is: %s \n", s1.name);
    printf("Student's roll number is: %d \n", s1.roll_no);
    printf("Student's age is: %d", s1.age);
}