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
#include <ctype.h>
#include <string.h>

#define Consonant (1u << ('b' - 'a') | 1u << ('c' - 'a') | 1u << ('d' - 'a') | 1u << ('f' - 'a') | 1u << ('g' - 'a') | 1u << ('h' - 'a') | 1u << ('j' - 'a') | 1u << ('k' - 'a') | 1u << ('l' - 'a') | 1u << ('m' - 'a') | 1u << ('n' - 'a') | 1u << ('p' - 'a') | 1u << ('q' - 'a') | 1u << ('r' - 'a') | 1u << ('s' - 'a') | 1u << ('t' - 'a') | 1u << ('v' - 'a') | 1u << ('w' - 'a') | 1u << ('x' - 'a') | 1u << ('y' - 'a') | 1u << ('z' - 'a'))

unsigned int createMask(const char *word) {
    unsigned int mask = 0;
    while (*word != '\0') {
        if (isalpha(*word) && (Consonant & (1u << (*word - 'a')))) {
            mask |= 1u << (*word - 'a');
        }
        word++;
    }
    return mask;
}

int main() {
    int letter_count = 0;
    int mask1 = 0;
    int mask2 = 0;
    int counter_sogl = 1;
    char sogl[] = "bcdfghjklmnpqrstvwxz";
    int c;

    char currentWord[1000];

    while ((c = getchar()) != EOF) {
        if (isalpha(c)) {
            ungetc(c, stdin);
            int index = 0;
            while ((c = getchar()) != EOF && isalpha(c)) {
                currentWord[index++] = c;
            }
            currentWord[index] = '\0';
            if (index > 0) {
                for (int i = 0; i < strlen(currentWord); i++) {
                    if (letter_count == 1) {
                        mask2 = createMask(&currentWord[i]);
                        if (mask1 != mask2) {
                            counter_sogl++;
                        }
                    } else {
                        letter_count = 1;
                    }
                    mask1 = createMask(&currentWord[i]);
                }
            }
            if (counter_sogl == 1) {
                printf("Есть слова с 1 согласной\n");
                break;
            } else {
                letter_count = 0;
                counter_sogl = 1;
            }
        }
    }

    return 0;
}

```
5. **Выводы**: Никогда не знаешь когда тебе можнт понадобиться работа с текстом поэтому данная лабораторная работа дала мне новый опыт и знания.

