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

short int check(char a)
{
    a = tolower(a);
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'y')
        return 2;
    if (a == ' ' || a == '\n' || a == '\t' || a == ',')
        return 0;
    if (isdigit(a))
        return -1;
    else
        return 1;
}

int main()
{
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    int word_count = 0;

    char *token = strtok(input, " \n");
    while (token != NULL)
    {
        int consonant_count = 0;
        int consonant_set[26] = {0};

        for (int i = 0; i < strlen(token); i++)
        {
            if (check(token[i]) == 1)
            {
                consonant_set[token[i] - 'a']++;
                if (consonant_set[token[i] - 'a'] > 1)
                {
                    break;
                }
                consonant_count++;
            }
        }

        if (consonant_count == 1)
        {
            word_count++;
        }
        token = strtok(NULL, " \n");
    }

    if (word_count > 0)
    {
        printf("Есть слова с 1 согласной");
    }
    else
    {
        printf("Таких слов нет.\n");
    }
    return 0;
}
```
5. **Выводы**: Никогда не знаешь когда тебе можнт понадобиться работа с текстом поэтому данная лабораторная работа дала мне новый опыт и знания.

