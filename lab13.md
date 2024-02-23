# Отчет по лабораторной работе № 13
## по курсу "Фундаментальная информатика"

Студент группы М8О-108Б-23 Денисов Константин Дмитриевич

Работа выполнена 

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Техника работы с целыми числами
2. **Цель работы**: Составить программу на языке Си для работы с текстовыми файлами.
3. **Заданиe**: №22
4. **Протокол**:
```
#include <stdio.h>
#include <string.h>

int opred(char letter) {
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'y') {
        return 1;
    }
    if (letter == ' ' || letter == ',') {
        return 0;
    } else {
        return -1;
    }
}

int main() {
    char input[100];
    fgets(input, 100, stdin);

    char *token = strtok(input, " ");
    int found = 0;

    while (token != NULL) {
        char letter = '\0';
        int counter_letters = 0;
        int sogl = 0;

        for (int i = 0; i < strlen(token); i++) {
            if (opred(token[i]) == -1 && counter_letters != 0) {
                if (token[i] != letter) {
                    sogl++;
                }
            }
            if (opred(token[i]) == -1 && counter_letters == 0) {
                letter = token[i];
                sogl = 1;
                counter_letters++;
            }
        }

        if (sogl == 1) {
            printf("Есть слова с 1 согласной\n");
            found = 1;
            break;
        }

        token = strtok(NULL, " ");
    }

    if (!found) {
        printf("Нет слов с 1 согласной\n");
    }

    return 0;
}
```
5. **Выводы**: Никогда не знаешь когда тебе можнт понадобиться работа с текстом поэтому данная лабораторная работа дала мне новый опыт и знания.

