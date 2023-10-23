# Отчет по лабораторной работе № 5
## по курсу "Прикладная математика и информатика"

Студент группы М8О-108Б-23 Денисов Константин Дмитриевич

Работа выполнена 

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**:Машина Тьюринга
2. **Цель работы**: Написать программу на машине тьюринга
3. **Задание**: 
- Кодирование числа в римской записи по Цезарю (в алфавите {I, V, X, L, C, D, M})
4. **Идея, метод, алгоритм решения задачи**: 
- Изучение принципов работы машины Тьюринга
- Написание программы выполняющей мою задачу
- Создание отдельной записи на github с отчётом и кодом
5. **Сценарий выполнения работы**: выполнить задачу, проверить результат
6. **Протокол**: 
```
00, ,<,01
01, ,>,02
01,I,<,01
01,V,<,01
01,X,<,01
01,L,<,01
01,C,<,01
01,D,<,01
01,M,<,01
02,I, ,03
02,V, ,04
02,X, ,05
02,L, ,06
02,C, ,07
02,D, ,08
02,M, ,09
03, ,>,10
04, ,>,11
05, ,>,12
06, ,>,13
07, ,>,14
08, ,>,15
09, ,>,16
10,I,>,10
10,V,>,10
10,X,>,10
10,L,>,10
10,C,>,10
10,D,>,10
10,M,>,10
10, ,>,17
11,I,>,11
11,V,>,11
11,X,>,11
11,L,>,11
11,C,>,11
11,D,>,11
11,M,>,11
11, ,>,18
12,I,>,12
12,V,>,12
12,X,>,12
12,L,>,12
12,C,>,12
12,D,>,12
12,M,>,12
12, ,>,19
13,I,>,13
13,V,>,13
13,X,>,13
13,L,>,13
13,C,>,13
13,D,>,13
13,M,>,13
13, ,>,20
14,I,>,14
14,V,>,14
14,X,>,14
14,L,>,14
14,C,>,14
14,D,>,14
14,M,>,14
14, ,>,21
15,I,>,15
15,V,>,15
15,X,>,15
15,L,>,15
15,C,>,15
15,D,>,15
15,M,>,15
15, ,>,22
16,I,>,16
16,V,>,16
16,X,>,16
16,L,>,16
16,C,>,16
16,D,>,16
16,M,>,16
16, ,>,23
17, ,L,24
18, ,C,25
19, ,D,26
20, ,M,27
21, ,I,28
22, ,V,29
23, ,X,30
24,M,<,24
24,D,<,24
24,C,<,24
24,L,<,24
24,X,<,24
24,V,<,24
24,I,<,24
24, ,<,31
25,M,<,25
25,D,<,25
25,C,<,25
25,L,<,25
25,X,<,25
25,V,<,25
25,I,<,25
25, ,<,32
26,M,<,26
26,D,<,26
26,C,<,26
26,L,<,26
26,X,<,26
26,V,<,26
26,I,<,26
26, ,<,33
27,M,<,27
27,D,<,27
27,C,<,27
27,L,<,27
27,X,<,27
27,V,<,27
27,I,<,27
27, ,<,34
28,M,<,28
28,D,<,28
28,C,<,28
28,L,<,28
28,X,<,28
28,V,<,28
28,I,<,28
28, ,<,35
29,M,<,29
29,D,<,29
29,C,<,29
29,L,<,29
29,X,<,29
29,V,<,29
29,I,<,29
29, ,<,36
30,M,<,30
30,D,<,30
30,C,<,30
30,L,<,30
30,X,<,30
30,V,<,30
30,I,<,30
30, ,<,37
31,M,<,31
31,D,<,31
31,C,<,31
31,L,<,31
31,X,<,31
31,V,<,31
31,I,<,31
31, ,I,38
32,M,<,32
32,D,<,32
32,C,<,32
32,L,<,32
32,X,<,32
32,V,<,32
32,I,<,32
32, ,V,38
33,M,<,33
33,D,<,33
33,C,<,33
33,L,<,33
33,X,<,33
33,V,<,33
33,I,<,33
33, ,X,38
34,M,<,34
34,D,<,34
34,C,<,34
34,L,<,34
34,X,<,34
34,V,<,34
34,I,<,34
34, ,L,38
35,M,<,35
35,D,<,35
35,C,<,35
35,L,<,35
35,X,<,35
35,V,<,35
35,I,<,35
35, ,C,38
36,M,<,36
36,D,<,36
36,C,<,36
36,L,<,36
36,X,<,36
36,V,<,36
36,I,<,36
36, ,D,38
37,M,<,37
37,D,<,37
37,C,<,37
37,L,<,37
37,X,<,37
37,V,<,37
37,I,<,37
37, ,M,38
38,I,>,39
38,V,>,39
38,X,>,39
38,L,>,39
38,C,>,39
38,D,>,39
38,M,>,39
39,I, ,40
39,V, ,41
39,X, ,42
39,L, ,43
39,C, ,44
39,D, ,45
39,M, ,46
40, ,>,47
41, ,>,48
42, ,>,49
43, ,>,50
44, ,>,51
45, ,>,52
46, ,>,53
47,M,>,47
47,C,>,47
47,D,>,47
47,L,>,47
47,X,>,47
47,V,>,47
47,I,>,47
47, ,>,54
48,M,>,48
48,C,>,48
48,D,>,48
48,L,>,48
48,X,>,48
48,V,>,48
48,I,>,48
48, ,>,55
49,M,>,49
49,C,>,49
49,D,>,49
49,L,>,49
49,X,>,49
49,V,>,49
49,I,>,49
49, ,>,56
50,M,>,50
50,C,>,50
50,D,>,50
50,L,>,50
50,X,>,50
50,V,>,50
50,I,>,50
50, ,>,57
51,M,>,51
51,C,>,51
51,D,>,51
51,L,>,51
51,X,>,51
51,V,>,51
51,I,>,51
51, ,>,58
52,M,>,52
52,C,>,52
52,D,>,52
52,L,>,52
52,X,>,52
52,V,>,52
52,I,>,52
52, ,>,59
53,M,>,53
53,C,>,53
53,D,>,53
53,L,>,53
53,X,>,53
53,V,>,53
53,I,>,53
53, ,>,60
54,M,>,54
54,C,>,54
54,D,>,54
54,L,>,54
54,X,>,54
54,V,>,54
54,I,>,54
54, ,L,24
55,M,>,55
55,C,>,55
55,D,>,55
55,L,>,55
55,X,>,55
55,V,>,55
55,I,>,55
55, ,C,25
56,M,>,56
56,C,>,56
56,D,>,56
56,L,>,56
56,X,>,56
56,V,>,56
56,I,>,56
56, ,D,26
57,M,>,57
57,C,>,57
57,D,>,57
57,L,>,57
57,X,>,57
57,V,>,57
57,I,>,57
57, ,M,27
58,M,>,58
58,C,>,58
58,D,>,58
58,L,>,58
58,X,>,58
58,V,>,58
58,I,>,58
58, ,I,28
59,M,>,59
59,C,>,59
59,D,>,59
59,L,>,59
59,X,>,59
59,V,>,59
59,I,>,59
59, ,V,29
60,M,>,60
60,C,>,60
60,D,>,60
60,L,>,60
60,X,>,60
60,V,>,60
60,I,>,60
60, ,X,30
39, ,>,61
61,I,>,61
61,V,>,61
61,X,>,61
61,L,>,61
61,C,>,61
61,D,>,61
61,M,>,61
61, ,#,61
```
7. **Выводы**:Благодаря этой лабораторной работе я понял принципы работы машины Тьюрина и научился писать на ней программы.