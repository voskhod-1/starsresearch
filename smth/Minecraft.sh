#!/bin/bash

# Выводим приветственное сообщение
echo "Привет, этот скрипт установит PortableMC и запустит Minecraft."

# Установка PortableMC через pip3
echo "Устанавливаю PortableMC..."
sudo pip3 install portablemc

# Проверяем, успешно ли завершилась установка
if [ $? -ne 0 ]; then
    echo "Ошибка при установке PortableMC. Пожалуйста, проверьте вашу систему."
    exit 1
fi

# Запрашиваем у пользователя никнейм
read -p "Введите ваш никнейм для Minecraft: " Nick

# Проверяем, что пользователь ввел никнейм
if [ -z "$Nick" ]; then
    echo "Ошибка: Никнейм не может быть пустым."
    exit 1
fi

# Запуск PortableMC с указанным никнеймом
echo "Запускаю Minecraft с никнеймом '$Nick'..."
portablemc start -u "$Nick"

# Проверяем, успешно ли завершился запуск
if [ $? -ne 0 ]; then
    echo "Ошибка при запуске PortableMC. Пожалуйста, проверьте логи."
    exit 1
fi

echo "Minecraft успешно запущен!"
