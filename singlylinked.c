#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;};
struct Node* createNode(int data) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode){
        printf("Memory allocation failed\n");
        exit(1);}
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void addNode(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode; 
    } else {
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next; 
        }
        current->next = newNode; 
    }
}
void deleteNode(struct Node** head, int value) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete %d\n", value);
        return;
    }
    struct Node* current = *head;
    struct Node* previous = NULL;
    if (current != NULL && current->data == value) {
        *head = current->next; 
        free(current);          
        return;
    }
    while (current != NULL && current->data != value) {
        previous = current;
        current = current->next;
    }
    if (current == NULL) {
        printf("Element %d not found in the list\n", value);
        return;
    }
    previous->next = current->next;
    free(current);
    printf("Element %d deleted from the list\n", value);
}
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* current = head;
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
int main() {
    struct Node* head = NULL; 
    int choice, data;
    while (1) {
        printf("\n1. Add Node\n2. Delete Node\n3. Display List\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: 
                printf("Enter the data to add: ");
                scanf("%d", &data);
                addNode(&head, data);
                break;
            case 2: 
                printf("Enter the value to delete: ");
                scanf("%d", &data);
                deleteNode(&head, data);
                break;
            case 3: 
                displayList(head);
                break;
            case 4: 
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
