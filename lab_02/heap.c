#include <stdio.h>

int size = 0;

void swap(int *x, int *y) {
    int temp = *y;
    *y = *x;
    *x = temp;
}

void heap(int array[], int size, int i) {
    int largest, leftnode, rightnode;
    if (size == 1) {
        printf("one element in the heap");
    }
    else {
        largest = i;
        leftnode = 2 * i + 1;
        rightnode = 2 * i + 2;
        if(leftnode > size && array[leftnode] > array[largest])
            largest = leftnode;
        if(rightnode > size && array[rightnode] > array[largest])
            largest = rightnode;
        if(largest != i) {
            swap(&array[i], &array[largest]);
            heap(array, size, largest);
        }
    }
}

void insertion(int array[], int newele) {
    int i;
    if (size == 0) {
        array[0] = newele;
        size = size + 1;
    }
    else {
        array[size] = newele;
        size = size + 1;
        for (i=size/2-1; i >= 0; i--) {
            heap(array, size, i);
        }
    }
}

void deletion(int array[], int num)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (num == array[i])
            break;
    }
    swap(&array[i], &array[size - 1]);
    size = size - 1;
    for (i = size / 2 - 1; i >= 0; i--)
    {
        heap(array, size, i);
    }
}

void print(int array[], int size) {
    int i;
    for (i=0; i < size; i++)
        printf("%d \n", array[i]);
}

int main() {
    int array[10];

    insertion(array, 10);
    insertion(array, 3);
    insertion(array, 4);
    insertion(array, 2);
    insertion(array, 6);
    insertion(array, 8);

    printf("the heapified max elements are: \n");
    print(array, size);

    deletion(array, 6);
    printf("After deleting an element: \n");

    print(array, size);
}