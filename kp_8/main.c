#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void insertEnd(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    
    Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

void deleteNode(Node** head, int key) {
    Node* current = *head;
    Node* prev = NULL;

    if (current != NULL && current->data == key) {
        *head = current->next; 
        free(current); 
        return;
    }

    while (current != NULL && current->data != key) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) return;

    prev->next = current->next;
    free(current);
}

int length(Node* head) {
    int count = 0;
    Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

void swapSecondAndLast(Node** head) {
    if (*head == NULL || (*head)->next == NULL || (*head)->next->next == NULL) {
        printf("Список слишком мал для обмена.\n");
        return;
    }

    Node* second = (*head)->next;
    Node* last = *head;
    Node* secondLast = NULL;

    while (last->next != NULL) {
        secondLast = last;
        last = last->next;
    }

    int temp = second->data;
    second->data = last->data;
    last->data = temp;
}

int main() {
    Node* head = NULL;
    
    int choice, value;

    while (1) {
        printf("\n1. Печать списка\n");
        printf("2. Вставка нового элемента\n");
        printf("3. Удаление элемента\n");
        printf("4. Подсчет длины списка\n");
        printf("5. Обмен местами второго и последнего элементов\n");
        printf("6. Выход\n");
        printf("Выберите действие: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printList(head);
                break;
            case 2:
                printf("Введите значение элемента: ");
                scanf("%d", &value);
                insertEnd(&head, value);
                break;
            case 3:
                printf("Введите значение элемента для удаления: ");
                scanf("%d", &value);
                deleteNode(&head, value);
                break;
            case 4:
                printf("Длина списка: %d\n", length(head));
                break;
            case 5:
                swapSecondAndLast(&head);
                break;
            case 6:
                exit(0);
            default:
                printf("Неверный выбор. Пожалуйста, попробуйте снова.\n");
        }
    }

    return 0;
}
