# Отчет по лабораторной работе КП №6
## по курсу "Алгоритмы и структуры данных"

Студент группы М8О-108Б-23 Денисов Константин Дмитриевич

Работа выполнена 

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Обработка последовательной файловой структуры на языке Си
2. **Цель работы**: Разработать последовательную структуру данных для представления простейшей базы данных на файлах в СП Си в соответствии с заданным вариантом.
3. **Задание**: №34
4. **Идея, метод, алгоритм решения задачи**: Реализация основы базы данных. Реализация требуемого действия
5. **Сценарий выполнения работы**: 
- Реализация программы генерации внешнего файла
- Реализация программы вывода внешнего файла
- Реализация программы выполнения необходимого действия
6. **Протокол**: 
$ ./query_passengers passengers.dat 0

Выводим всех пассажиров:
ID | Имя               | Вес багажа
-----------------------------------
1  | Иван Петров       | 25 кг
2  | Анна Сидорова     | 30 кг
3  | Олег Кузнецов     | 28 кг
4  | Мария Иванова     | 27 кг
5  | Сергей Волков     | 32 кг

$ ./query_passengers passengers.dat 3
Поиск пассажиров с багажом в пределах отклонения 3 кг:
ID | Имя               | Вес багажа
-----------------------------------
2  | Анна Сидорова     | 30 кг
3  | Олег Кузнецов     | 28 кг
4  | Мария Иванова     | 27 кг
7. **Замечания автора**: -
8. **Выводы**: В нашем мире без базы данных не обходится не один коммерческий проект, поэтому реализация собственной субд является полезным опытом