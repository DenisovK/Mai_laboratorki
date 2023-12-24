# Отчет по лабораторной работе № 14
## по курсу "Фундаментальная информатика"

Студент группы М8О-108Б-23 Денисов Константин Дмитриевич

Работа выполнена 

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Техника работы с матрицами
2. **Цель работы**: Составить программу на языке Си для работы с матрицами.
3. **Заданиe**: №21
4. **Протокол**:
```
#include <stdio.h>

void read_spiral(int matrix[3][4], int rows, int cols) {
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
    int direction = 0;

    while (top <= bottom && left <= right) {
        if (direction == 0) {
            for (int i = left; i <= right; i++) {
                printf("%d ", matrix[top][i]);
            }
            top++;
        } else if (direction == 1) {
            for (int i = top; i <= bottom; i++) {
                printf("%d ", matrix[i][right]);
            }
            right--;
        } else if (direction == 2) {
            for (int i = right; i >= left; i--) {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;
        } else if (direction == 3) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }
}

int main() {
    int matrix[3][4] = {{11, 22, 33, 44},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12}};

    read_spiral(matrix, 3, 4);

    return 0;
}
```
5. **Выводы**: Матрицы очень часто используются для внесения данных по группам и умение пользоваться ими это хороший навык который может пригодиться.
