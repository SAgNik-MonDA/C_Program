#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}


void deleteFromBeginning(struct Node** head) {
    if (*head == NULL) {
        printf("The list is empty. No node to delete.\n");
        return;
    }

    struct Node* temp = *head;
    *head = (*head)->next;
    printf("Deleted element: %d\n", temp->data);
    free(temp);
}


void deleteFromEnd(struct Node** head) {
    if (*head == NULL) {
        printf("The list is empty. No node to delete.\n");
        return;
    }

    struct Node* temp = *head;
    struct Node* prev = NULL;

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    if (prev == NULL) { 
        *head = NULL;
    } else {
        prev->next = NULL;
    }

    printf("Deleted element: %d\n", temp->data);
    free(temp);
}


void deleteFromPosition(struct Node** head, int position) {
    if (*head == NULL) {
        printf("The list is empty. No node to delete.\n");
        return;
    }

    struct Node* temp = *head;

    if (position == 1) {
        *head = temp->next;
        printf("Deleted element: %d\n", temp->data);
        free(temp);
        return;
    }

    struct Node* prev = NULL;
    for (int i = 1; i < position && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position!\n");
        return;
    }

    prev->next = temp->next;
    printf("Deleted element: %d\n", temp->data);
    free(temp);
}


void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int choice, data, position;

    printf("Linked List Operations:\n");
    printf("1. Insert at the end\n");
    printf("2. Delete from the beginning\n");
    printf("3. Delete from the end\n");
    printf("4. Delete from a specific position\n");
    printf("5. Display the linked list\n");
    printf("6. Exit\n");

    while (1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the data to insert at the end: ");
                scanf("%d", &data);
                insertAtEnd(&head, data);
                break;

            case 2:
                deleteFromBeginning(&head);
                break;

            case 3:
                deleteFromEnd(&head);
                break;

            case 4:
                printf("Enter the position to delete the node: ");
                scanf("%d", &position);
                deleteFromPosition(&head, position);
                break;

            case 5:
                printf("The linked list is:\n");
                printList(head);
                break;

            case 6:
                printf("Exiting program.\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
