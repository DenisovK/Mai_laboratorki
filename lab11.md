# Отчет по лабораторной работе № 11
## по курсу "Фундаментальная информатика"

Студент группы М8О-108Б-23 Денисов Константин Дмитриевич
Работа выполнена 

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Простейший лексический анализ
2. **Цель работы**: Составить программу на языке Си, выполняющую анализ и обработку вводимого текста
3. **Заданиe**: №1
4. **Протокол**: 
```
#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("source_code", "r");
    char line[1000];
    int totalWordsInComments = 0;
    int totalLinesHasComments = 0;
    if (file) {
        while (fgets(line, sizeof(line), file)) {
            if (strstr(line, "//")) {
              totalLinesHasComments++;
                char *token = strtok(line, " \t\n");
                while (token != NULL) {
                    totalWordsInComments++;
                    token = strtok(NULL, " \t\n");
                }
            }
        }
        fclose(file);
    }

    printf("Total words in single line comments: %d\n", totalWordsInComments-totalLinesHasComments);

    return 0;
}
```
 
5. **Вывод**: Лексический анализ текстов является одной из ключевых задач, которые ставились изначально при создании ЭВМ. По этой причине реализация данного задания является очень полезным для любого программиста.
