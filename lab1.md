# Отчет по лабораторной работе № 1
## по курсу "Прикладная математика и информатика"

Студент группы М8О-108Б-23 Денисов Константин Дмитриевич

Работа выполнена 

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Git, Github
2. **Цель работы**: Изучить основы Git
3. **Задание**: 
- завести репозиторий (**общий под все лабораторные работы с отдельной папкой под каждую лр!**)
- отчет с листингом в Markdown (листинг - ctrl+c -> ctrl+v из терминала с форматированием в markdown)
- создать отдельную ветку в репозитории под задание
- создать коммит с листингом и отчетом
- смержить ветку в мейн
4. **Идея, метод, алгоритм решения задачи**: 
- git init 
- редактировать Report-template.md 
- git add \*
- git commit
- git checkout -b lab1
- git push origin lab1
- зайти на github.com
- создать pull request
- смержить в main
5. **Сценарий выполнения работы**: выполнить команды, проверить результат
6. **Протокол**: 
```
PS C:\Users\Asus\Mai_laboratorki> git add .
PS C:\Users\Asus\Mai_laboratorki> git commit -m "hello"
[main d0fb358] hello
 2 files changed, 31 insertions(+)
 create mode 100644 .vscode/launch.json
PS C:\Users\Asus\Mai_laboratorki> git push origin main
info: please complete authentication in your browser...
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 8 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (5/5), 1.04 KiB | 1.04 MiB/s, done.
Total 5 (delta 0), reused 0 (delta 0), pack-reused 0
To https://github.com/DenisovK/Mai_laboratorki.git
   7d58292..d0fb358  main -> main
PS C:\Users\Asus\Mai_laboratorki> git checkout -b laba1
Switched to a new branch 'laba1'
PS C:\Users\Asus\Mai_laboratorki> git add .
PS C:\Users\Asus\Mai_laboratorki> git commit -m "ahh"
On branch laba1
nothing to commit, working tree clean
PS C:\Users\Asus\Mai_laboratorki> ^C
PS C:\Users\Asus\Mai_laboratorki> git add .
PS C:\Users\Asus\Mai_laboratorki> git commit -m "ahh"
[laba1 606c0f5] ahh
 1 file changed, 2 insertions(+), 1 deletion(-)
PS C:\Users\Asus\Mai_laboratorki> git push origin laba1
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Delta compression using up to 8 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 298 bytes | 298.00 KiB/s, done.
Total 3 (delta 1), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
remote:
remote: Create a pull request for 'laba1' on GitHub by visiting:
remote:      https://github.com/DenisovK/Mai_laboratorki/pull/new/laba1
remote:
To https://github.com/DenisovK/Mai_laboratorki.git
 * [new branch]      laba1 -> laba1
PS C:\Users\Asus\Mai_laboratorki>
```
7. **Выводы**:Короче я поработал с Git и мне понравилось.проблемы были только с консолью и ветками так как я не мог установить Ubuntu , а WSL у меня выдавал ошибку.