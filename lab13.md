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
#include <ctype.h>

int main() {
    char stroka[100];
    printf("Введите строку: ");
    fgets(stroka, 100, stdin);
    
    char* text[20];
    int counter_sogl = 0;
    char* alp = "aeuioyуеыаоэяиё";
    
    char* token = strtok(stroka, " ,;");
    int i = 0;
    while (token != NULL) {
        text[i++] = token;
        token = strtok(NULL, " ,;");
    }
    
    for (int k = 0; k < i; k++) {
        counter_sogl = 0;
        char* sogl = "qwrtpsdfghjklzxcvbnmйцкнгшщзхфвпрлджчсмтьбюъ";
        for (int j = 0; j < strlen(text[k]); j++) {
            if (strchr(alp, tolower(text[k][j])) == NULL) {
                if (strchr(sogl, tolower(text[k][j])) != NULL) {
                    sogl = text[k] + j;
                    if (counter_sogl <= 1) {
                        counter_sogl = 1;
                    }
                } else {
                    counter_sogl = 100;
                    break;
                }
            }
        }
        if (counter_sogl == 1) {
            printf("Есть слова с 1 согласной\n");
            break;
        }
    }

    return 0;
}

```
5. **Выводы**: Никогда не знаешь когда тебе можнт понадобиться работа с текстом поэтому данная лабораторная работа дала мне новый опыт и знания.

