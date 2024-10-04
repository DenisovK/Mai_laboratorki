#!/bin/bash

if [[ "$1" == "?" ]]; then
      echo "
Описание:
      Этот скрипт удаляет файлы с заданным суффиксом, если уже имеются файлы с такими же именами,
      но с другим суффиксом

Подсказка:
      1-ый параметр отввечает за удаляемый суффикс;
      2-ой параметр - второй суффикс;
"
      exit 0;
fi;

suffix="${1:-.c}";
bak_suffix="${2:-.py}";

for file in *$suffix; do
    if [ -e "${file%$suffix}$bak_suffix" ]; then
        rm "$file"
        echo "Deleted $file"
    fi
done