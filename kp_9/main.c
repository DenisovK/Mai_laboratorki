#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_SIZE 12
#define KEY_LENGTH 5

typedef struct {
    char key[KEY_LENGTH];
} Element;

void printArray(Element arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%s ", arr[i].key);
    }
    printf("\n");
}

void insertionSort(Element arr[], int size) {
    for (int i = 1; i < size; i++) {
        Element key = arr[i];
        int j = i - 1;
        while (j >= 0 && strcmp(arr[j].key, key.key) > 0) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int binarySearch(Element arr[], int size, const char* key) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int cmp = strcmp(arr[mid].key, key);
        if (cmp == 0) {
            return mid;
        }
        if (cmp < 0) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

void fillArrayRandom(Element arr[], int size) {
    const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < KEY_LENGTH - 1; j++) {
            arr[i].key[j] = charset[rand() % (sizeof(charset) - 1)];
        }
        arr[i].key[KEY_LENGTH - 1] = '\0';
    }
}

int main() {
    srand(time(NULL));
    Element arr[MAX_SIZE];
    int size;

    printf("Введите количество элементов в таблице (от 8 до %d): ", MAX_SIZE);
    scanf("%d", &size);
    if (size < 8 || size > MAX_SIZE) {
        printf("Неправильный размер массива.\n");
        return 1;
    }

    printf("\nСлучай 1: Элементы упорядочены\n");
    for (int i = 0; i < size; i++) {
        snprintf(arr[i].key, KEY_LENGTH, "A%d", i);
    }
    printf("Исходное состояние: ");
    printArray(arr, size);
    insertionSort(arr, size);
    printf("После сортировки: ");
    printArray(arr, size);

    printf("\nСлучай 2: Элементы в обратном порядке\n");
    for (int i = 0; i < size; i++) {
        snprintf(arr[i].key, KEY_LENGTH, "A%d", size - i);
    }
    printf("Исходное состояние: ");
    printArray(arr, size);
    insertionSort(arr, size);
    printf("После сортировки: ");
    printArray(arr, size);

    printf("\nСлучай 3: Элементы не упорядочены\n");
    fillArrayRandom(arr, size);
    printf("Исходное состояние: ");
    printArray(arr, size);
    insertionSort(arr, size);
    printf("После сортировки: ");
    printArray(arr, size);

    char key[KEY_LENGTH];
    printf("\nВведите ключ для поиска (введите 'exit' для выхода): ");
    while (scanf("%s", key), strcmp(key, "exit") != 0) {
        int result = binarySearch(arr, size, key);
        if (result != -1) {
            printf("Элемент с ключом '%s' найден на позиции %d.\n", key, result);
        } else {
            printf("Элемент с ключом '%s' не найден.\n", key);
        }
        printf("Введите следующий ключ для поиска: ");
    }

    return 0;
}
