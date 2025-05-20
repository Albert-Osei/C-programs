#include <stdio.h>;
int main(){
    enum months {jan, feb, mar, apr=9, june};
    enum months m,m1;
    m = mar;
    m1 = apr;
    printf("the value of m is %d \n", m);
    printf("the value of m1 is %d", m1);
}