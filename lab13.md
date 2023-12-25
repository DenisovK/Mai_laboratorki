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

int is_consonant(char c) {
    c = tolower(c);
    return (c >= 'b' && c <= 'd') || (c >= 'f' && c <= 'h') || (c >= 'j' && c <= 'n') || (c >= 'p' && c <= 't') || (c >= 'v' && c <= 'z');
}

int main() {
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    
    int consonant_count = 0;
    int word_count = 0;
    
    char *token = strtok(input, " \n");
    while (token != NULL) {
        int consonant_set[26] = {0};
        int has_single_consonant = 1;
        
        for (int i = 0; i < strlen(token); i++) {
            if (is_consonant(token[i])) {
                consonant_set[token[i] - 'a']++;
                if (consonant_set[token[i] - 'a'] > 1) {
                    has_single_consonant = 0;
                    break;
                }
            }
        }
        
        if (has_single_consonant) {
            consonant_count=1;
        }
        
        word_count++;
        token = strtok(NULL, " \n");
    }
    if (consonant_count == 1){
    printf("Есть слова ровно с 1 согласной");
    }
    if (consonant_count != 1){
    printf("Таких слов нет");
    }
    return 0;
}
```
5. **Выводы**: Никогда не знаешь когда тебе можнт понадобиться работа с текстом поэтому данная лабораторная работа дала мне новый опыт и знания.

