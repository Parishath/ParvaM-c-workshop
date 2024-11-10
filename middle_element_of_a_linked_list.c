#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void findMiddle(struct Node* head) {
    struct Node *slow = head, *fast = head;
    if (head != NULL) {
        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }
        printf("Middle element is: %d\n", slow->data);
    }
}

int main() {
    struct Node* head = NULL;
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    first->data = 1;
    first->next = NULL;
    head = first;

    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    second->data = 2;
    second->next = NULL;
    first->next = second;

    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    third->data = 3;
    third->next = NULL;
    second->next = third;

    findMiddle(head);

    return 0;
}
