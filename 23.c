#include <stdio.h>
#include <stdlib.h>

// Структура для представления узла двоичного дерева
struct Node {
    float data;
    struct Node *left;
    struct Node *right;
};

// Функция для создания нового узла
struct Node* createNode(float value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Функция для нахождения максимальной глубины дерева
int maxDepth(struct Node* node) {
    if (node == NULL) {
        return 0;
    } else {
        int leftDepth = maxDepth(node->left);
        int rightDepth = maxDepth(node->right);

        if (leftDepth > rightDepth) {
            return leftDepth + 1;
        } else {
            return rightDepth + 1;
        }
    }
}

// Функция для нахождения значения нетерминальной вершины с максимальной глубиной
float findValueAtMaxDepth(struct Node* root) {
    if (root == NULL) {
        return 0.0; // Дерево пустое
    }

    int max_depth = maxDepth(root);

    while (root != NULL) {
        if ((maxDepth(root->left) == max_depth - 1) && (maxDepth(root->right) == max_depth - 1)) {
            return root->data;
        }

        if (maxDepth(root->left) >= maxDepth(root->right)) {
            root = root->left;
        } else {
            root = root->right;
        }
    }

    return 0.0; // Нет нетерминальной вершины с максимальной глубиной
}

// Функция для построения двоичного дерева из ввода пользователя
struct Node* buildBinaryTree() {
    float value;
    printf("Введите значение корневого узла: ");
    scanf("%f", &value);
    
    struct Node* root = createNode(value);
    
    char choice;
    printf("Хотите добавить левого потомка для текущего узла? (y/n): ");
    scanf(" %c", &choice);
    
    if (choice == 'y') {
        root->left = buildBinaryTree();
    }
    
    printf("Хотите добавить правого потомка для текущего узла? (y/n): ");
    scanf(" %c", &choice);
    
    if (choice == 'y') {
        root->right = buildBinaryTree();
    }
    
    return root;
}

int main() {
    // Построение двоичного дерева из ввода пользователя
    struct Node* root = buildBinaryTree();
    
    // Вызов функции для нахождения значения нетерминальной вершины с максимальной глубиной
    float result = findValueAtMaxDepth(root);
    
    if (result != 0.0) {
        printf("Значение нетерминальной вершины с максимальной глубиной: %.2f\n", result);
    } else {
        printf("Нет нетерминальной вершины с максимальной глубиной\n");
    }

    return 0;
}
