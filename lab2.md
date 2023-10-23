# Отчет по лабораторной работе № 2
## по курсу "Прикладная математика и информатика"

Студент группы М8О-108Б-23 Денисов Константин Дмитриевич

Работа выполнена 

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Bash, linux, terminal Цель работы: Опробовать команды, работа с архивами и удаленной машиной
2. **Протокол**: 
```
stud@lin-aio16:~/snap/lab2$ ls
 id_rsa.pub   Oil        random3.md~   rsa      'ssh-keygen -t rsa'
 id_rsa.pub.pub   random3.md   random.md     rsa.pub  'ssh-keygen -t rsa.pub'
stud@lin-aio16:~/snap/lab2$ who
stud     :1           2023-10-23 07:53 (:1)
stud@lin-aio16:~/snap/lab2$ whoami
stud
stud@lin-aio16:~/snap/lab2$ cd
stud@lin-aio16:~$ cd~
Command 'cd~' not found, did you mean:
  command 'cd5' from deb cd5 (0.1-4)
  command 'cdp' from deb irpas (0.10-9)
  command 'cde' from deb cde (0.1+git9-g551e54d-1.2)
  command 'cdb' from deb tinycdb (0.78build3)
  command 'cdi' from deb cdo (2.0.4-1)
  command 'cdo' from deb cdo (2.0.4-1)
  command 'cdw' from deb cdw (0.8.1-2)
Try: apt install <deb name>
stud@lin-aio16:~$ cd snap
stud@lin-aio16:~/snap$ ls
firefox  lab2
stud@lin-aio16:~/snap$ mkdir lab2
mkdir: cannot create directory ‘lab2’: File exists
stud@lin-aio16:~/snap$ cd lab2
stud@lin-aio16:~/snap/lab2$ cat > random.md
ls
 


d
onj hjh 
stud@lin-aio16:~/snap/lab2$ mkdir laba
stud@lin-aio16:~/snap/lab2$ ls
 id_rsa.pub   id_rsa.pub.pub   laba   Oil   random3.md  random3.md~   random.md   rsa  rsa.pub  'ssh-keygen -t rsa'  'ssh-keygen -t rsa.pub'
stud@lin-aio16:~/snap/lab2$ mv random.md laba/random.md
stud@lin-aio16:~/snap/lab2$ ls
 id_rsa.pub   id_rsa.pub.pub   laba   Oil   random3.md  random3.md~   rsa   rsa.pub  'ssh-keygen -t rsa'  'ssh-keygen -t rsa.pub'
stud@lin-aio16:~/snap/lab2$ cd laba
stud@lin-aio16:~/snap/lab2/laba$ ls
random.md
stud@lin-aio16:~/snap/lab2/laba$ cat random.md
ls



d
onj hjh 
stud@lin-aio16:~/snap/lab2/laba$ cd../
bash: cd../: No such file or directory
stud@lin-aio16:~/snap/lab2/laba$ cd ../
stud@lin-aio16:~/snap/lab2$ ps
    PID TTY          TIME CMD
  24577 pts/1    00:00:00 bash
  27335 pts/1    00:00:00 ps
stud@lin-aio16:~/snap/lab2$ emacs random.md
stud@lin-aio16:~/snap/lab2$ tail random.md
tail: cannot open 'random.md' for reading: No such file or directory
stud@lin-aio16:~/snap/lab2$ head random.md
head: cannot open 'random.md' for reading: No such file or directory
stud@lin-aio16:~/snap/lab2$ tail random.md 1
tail: cannot open 'random.md' for reading: No such file or directory
tail: cannot open '1' for reading: No such file or directory
stud@lin-aio16:~/snap/lab2$ grep "r" random.md
grep: random.md: No such file or directory
stud@lin-aio16:~/snap/lab2$ mkdir tmp
stud@lin-aio16:~/snap/lab2$ ls
 id_rsa.pub   id_rsa.pub.pub   laba   Oil   random3.md  random3.md~   rsa   rsa.pub  'ssh-keygen -t rsa'  'ssh-keygen -t rsa.pub'   tmp
stud@lin-aio16:~/snap/lab2$ tail random3.md 
Raiden1
Raiden1
Raiden1
Raiden1
Raiden1
Raiden1
Raiden1
Raiden1
Raiden1
Raidenstud@lin-aio16:~/snap/lab2$ rmdir tmp
stud@lin-aio16:~/snap/lab2$ ls
 id_rsa.pub   id_rsa.pub.pub   laba   Oil   random3.md  random3.md~   rsa   rsa.pub  'ssh-keygen -t rsa'  'ssh-keygen -t rsa.pub'
stud@lin-aio16:~/snap/lab2$ sudo mkdir tmp
[sudo] password for stud: 
Sorry, try again.
[sudo] password for stud: 
Sorry, try again.
[sudo] password for stud: 
sudo: no password was provided
sudo: 2 incorrect password attempts
stud@lin-aio16:~/snap/lab2$ sudo mkdir tmp
[sudo] password for stud: 
stud is not in the sudoers file.  This incident will be reported.
stud@lin-aio16:~/snap/lab2$ echo "laba"
laba
stud@lin-aio16:~/snap/lab2$ ssh k_denisov@185.5.249.140
k_denisov@185.5.249.140's password: 
Permission denied, please try again.
k_denisov@185.5.249.140's password: 
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.

Last login: Mon Oct 23 11:11:53 2023 from 185.215.176.72
k_denisov@vds2476450:~$ ssh-keygen
Generating public/private rsa key pair.
Enter file in which to save the key (/home/k_denisov/.ssh/id_rsa): rrsa
Enter passphrase (empty for no passphrase): 
Enter same passphrase again: 
Your identification has been saved in rrsa
Your public key has been saved in rrsa.pub
The key fingerprint is:
SHA256:k6R/lX6u/Jc
```
7. **Выводы**:На этой лабораторной работе я научился прописывать новые команды, подключаться к удаленной машине, архивировать и разархивировать файлы. Я считаю, что работы с удаленной машиной позволяет работать из дома с групповым проектом, расположенном на другой машине, но нужно это делать аккуратно, так как можно случайно изменить не тот файл и за это тебя накажут(наверное).
