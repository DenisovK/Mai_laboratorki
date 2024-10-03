#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct Node {
    char *value; // значение узла (оператор или операнд)
    struct Node *left; // левый дочерний узел
    struct Node *right; // правый дочерний узел
} Node;

// Функция для создания нового узла
Node* createNode(char *value) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->value = strdup(value);
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Функция для освобождения памяти дерева
void freeTree(Node *root) {
    if (root == NULL) return;
    freeTree(root->left);
    freeTree(root->right);
    free(root->value);
    free(root);
}

// Функция для печати дерева в виде префиксного выражения
void printTree(Node *root) {
    if (root == NULL) return;
    printf("%s ", root->value);
    printTree(root->left);
    printTree(root->right);
}

// Функция для деления многочлена на число k
void dividePolynomial(Node *root, double k) {
    if (root == NULL) return;

    // Проверяем, является ли текущий узел числом
    if (isdigit(root->value[0]) || (root->value[0] == '-' && isdigit(root->value[1]))) {
        double value = atof(root->value);
        value /= k;
        sprintf(root->value, "%.2f", value); // сохраняем результат обратно в узел
    }

    // Рекурсивно обходим левое и правое поддеревья
    dividePolynomial(root->left, k);
    dividePolynomial(root->right, k);
}

// Функция для построения дерева из выражения
Node* buildTree(char **tokens, int *index, int numTokens) {
    if (*index >= numTokens) return NULL;

    char *token = tokens[*index];
    
    // Если это число, создаем узел и переходим к следующему токену
    if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[1]))) {
        Node *node = createNode(token);
        (*index)++;
        return node;
    }

    // Если это оператор, создаем узел и строим поддеревья
    Node *node = createNode(token);
    (*index)++;
    
    node->left = buildTree(tokens, index, numTokens);
    node->right = buildTree(tokens, index, numTokens);

    return node;
}

// Функция для разбивки строки на токены
int tokenize(char *expression, char ***tokens) {
    const char delimiters[] = " \n";
    char *token = strtok(expression, delimiters);
    int count = 0;

    // Подсчитываем количество токенов
    while (token != NULL) {
        count++;
        token = strtok(NULL, delimiters);
    }

    *tokens = malloc(count * sizeof(char*));
    
    // Заполняем массив токенов
    token = strtok(expression, delimiters);
    count = 0;
    while (token != NULL) {
        (*tokens)[count++] = token;
        token = strtok(NULL, delimiters);
    }

    return count;
}

int main() {
    char expression[100];
    double k;

    printf("Введите арифметическое выражение: ");
    fgets(expression, sizeof(expression), stdin);
    
    printf("Введите число k для деления: ");
    scanf("%lf", &k);

    char **tokens;
    int numTokens = tokenize(expression, &tokens);

    int index = 0;
    Node *tree = buildTree(tokens, &index, numTokens);

    printf("Дерево в префиксной записи: ");
    printTree(tree);
    printf("\n");

    dividePolynomial(tree, k);

    printf("Дерево после деления на %.2f: ", k);
    printTree(tree);
    printf("\n");

    // Освобождение памяти
    free(tokens);
    freeTree(tree);

    return 0;
}