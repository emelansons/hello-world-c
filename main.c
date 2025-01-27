#include <stdio.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    int x = 666, y = 333, z = 44;
    int* ptr;
    struct Node head = {x, NULL};
    int* second[2] = {NULL, &y};
    int* third[2] = {NULL, &z};

    
    
    printf("Hello, World %d \n", head.data);
    return 0;
}
