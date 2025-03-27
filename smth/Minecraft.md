[Назад](../README.md)
***
# Как запустить майнкрафт на учебных ПК?
**На windows запустить не получится из-за ограничений**

**На компьютере должен быть установлен линукс(как правило в учебных есть Ред ОС)**
***
## Инструкция(есть еще [bash-скрипт](Minecraft.sh) для опытных линуксоидов)
### 1. Запустите линукс и залогинтесь
### 2. Откройте терминал(в учебных ПК – Terminator)
### 3. Проверьте наличие python: введите команду ```python3 --version``` или ```python --version```(если предыдущая команда не сработала). Должно быть что-то вроде:
![фото](https://github.com/user-attachments/assets/602a89c8-18a4-4a6a-b8f5-eb58373e99bf)
### 4. Введите команду ```pip install portalemc``` или ```sudo pip3 install portablemc и дождитесь завершения установки
### 5. Запустите лаунчер: введите команду ```portablemc start```
***
## Важно! Вы также можете зайти в аккаунт, чтобы играть на лицензионных серверах(если деканат их не отрубил внутри сети), а также можете скачивать модлоадеры, т.к. Forge, Fabric и т.д.
## Важно! Внутри сети ФКН вы можете также играть по локальной сети с друзьями!

```bash
# Запустить с логином в аккаунт
portablemc login <почта_или_никнейм>
# Запустить со своим ником(пиратка)
portablemc start -u <Никнейм>
# Запустить последнюю версию
portablemc start
portablemc start release
# Запустить последний снапшот
portablemc start snapshot
# Запустить 1.20.1
portablemc start 1.20.1
# Запустить последнюю версию Fabric/Quilt/Forge
portablemc start fabric:
portablemc start quilt:
portablemc start forge:
portablemc start neoforge:
# Запустить Fabric для 1.20.1
portablemc start fabric:1.20.1
# Запустить последний или рекомендованный Forge для 1.20.1
portablemc start forge:1.20.1-latest
portablemc start forge:1.20.1-recommended
# Запустить NeoForge для 1.20.1
portablemc start neoforge:1.20.1
```
