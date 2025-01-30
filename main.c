#include <stdio.h>

struct Node {
    int data;
    struct Node* next;
};

void printLinkedList (struct Node* head) {
    struct Node current = *head;
    int count = 0;
    printf("START OF LIST\n");
    printf("\tNODE: %d\t[ DATA:\t%d;\tNEXT:\t%p ]\n", count, current.data, current.next);
    while (current.next) {
        count++;
        current = *current.next;
        printf("\tNODE: %d\t[ DATA:\t%d;\tNEXT:\t%p ]\n", count, current.data, current.next);
    }
    printf("END OF LIST\n");
}

void addNode (struct Node* head, struct Node* newNode) {
    struct Node current = *head;
    while(current.next) {
        current = *current.next;
    }
    printf("adding new node to the node with data = %d\n", current.data);
    printf("%p\n", newNode);
    current.next = newNode;

}

int main() {
    int x = 666, y = 333, z = 44;
    struct Node third = {0, NULL};
    struct Node second = {2, &third};
    struct Node head = {x, &second};

    printLinkedList(&head);

    struct Node newNode = {451, NULL};    
    addNode(&head, &newNode);
    printLinkedList(&head);
    
    
    // printf("Hello, World %d \n", head.data);
    return 0;
}
