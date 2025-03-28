[назад](web.md)
***
## Калькулятор и теория для работы с ним
[калькулятор ip](https://infocisco.ru/ip_calculator.php/)

![telegram-cloud-photo-size-2-5373326476587429446-x](https://github.com/user-attachments/assets/37aa209f-3304-43de-a63e-a8918aee36b6)

![telegram-cloud-photo-size-2-5373326476587429445-x](https://github.com/user-attachments/assets/494ec8b6-5e38-4d77-8291-0533105ae004)
***
## Сами задания
#### В случае рекурсивного запроса DNS-сервер:
+ либо возвращает данные о зоне, за которую он ответственен, либо возвращает ошибку
+ **опрашивает серверы (в порядке убывания уровня зон в имени), пока не найдет ответ или не обнаружит, что домен не существует**
***
#### Опишите структуру URL:
+ <схема> :// <логин> : <пароль> @ <хост> : <порт> / <путь>
***

#### Опишите правильную последовательность элементов структуры HTTP-ответа сервера
+ версия протокола HTTP
+ код ответа
+ пояснение
+ поля заголовка
+ пустая строка
+ тело запроса     
***
POP3 - **протокол используемый клиентами электронной почты для получения почты с удаленного сервера по TCP- соединению**

HTTP - **протокол прикладного уровня передачи данных, изначально — в виде гипертекстовых документов в формате HTML**

SSH - **сетевой протокол прикладного уровня, позволяющий производить удалённое управление операционной системой и туннелирование TCP-соединений (например, для передачи файлов), шифрует**

TELNET  - **сетевой протокол для реализации текстового терминального интерфейса по сети**

IMAP - **протокол прикладного уровня для доступа к электронной почте**

FTP  - **протокол передачи файлов по сети со специального файлового сервера на компьютер пользователя**

SMTP - **сетевой протокол, предназначенный для передачи электронной почты в сетях TCP/IP**
***
#### Назовите основные структуры , курирующие развитие архитектуры и протоколов Интернет: 

IETF - **открытое международное сообщество проектировщиков, учёных, сетевых операторов и провайдеров. Результаты деятельности рабочих групп оформляются в виде рабочих проектов и используются для кодификации новых стандартов**

IAB  - **группа технических советников , которая осуществляет надзор за архитектурой Интернета , включая его протоколы и связанные с ними процедуры , надзор за созданием новых стандартов Интернета, редактирование и публикацию серии документов**

ISOC - **международная профессиональная организация, занимающаяся развитием и обеспечением доступности сети Интернет. Занимается финансированием и координацией общественных инициатив, связанных с Интернетом**

W3C - **организация, разрабатывающая и внедряющая технологические стандарты для Всемирной паутины**

IRTF - **подразделение, которое выполняет долгосрочные исследовательские программы, связанные с вопросами развития архитектуры, базовых протоколов и сетевых приложений сети Интернет**

ICANN - **международная некоммерческая организация, которая регулируется вопросами, связанными с доменными именами , IP-адресам и прочими аспектами функционирования Интернета**

***
#### Выберите утверждения, которые ``не относятся`` к протоколу TCP:

не предоставляет никаких гарантий доставки сообщения для вышестоящего протокола и не сохраняет состояния отправленных сообщений

**с помощью данного протокола компьютерные приложения могут посылать сообщения (датаграммы) другим хостам по IP-сети без необходимости предварительного сообщения для установки специальных каналов передачи или путей данных**
***
#### Выберите правильное соответствие:
ftp - **протокол передачи файлов по сети**

tracert - **служебная компьютерная программа**

telnet - **утилита для реализации текстового терминального интерфейса по сети**

netstat - **утилита командной строки выводящая на дисплей состояние ТСР-соединений (как входящих, так и исходящих), таблицы маршрутизации**

ping - **утилита для проверки целостности и качества соединений в сетях на основе ТСР/IP**

***
#### В какой части ответа сервера содержится запрашиваемый клиентом веб-ресурс?
+ в теле ответа сервера
***
#### Выберите утверждения, которые относятся к IP-протоколу:
- [ ] осуществляет надежную передачу потока байтов от одного процесса к другому
- [ ] предоставляет поток данных с предварительной установкой соединения, осуществляет повторный запрос данных в случае потери данных
- [ ] с помощью данного протокола компьютерные приложения могут посылать предложения другим хостам без необходимости предварительного сообщения для установки специальных каналов передачи или путей данных

- [x] **маршрутизируемый протокол сетевого уровня**

- [x] **объединяет сегменты сети в единую сеть, обеспечивая доставку пакетов данных между любыми узлами сети через произвольное число промежуточных узлов dns**
      
- [x] **не гарантирует надежной доставки пакета до адресата**

***
#### Выберите утверждения, которые ``не относятся`` к DNS:

+ **предоставляет поток данных с предварительной установкой соединения, осуществляет повторный запрос данных в случае потери данных**

+ **объединяет сегменты сети в единую сеть, обеспечивая доставку пакетов
 данных между любыми узлами сети через произвольное число промежуточных узлов**
***
#### Выберите утверждения, ``относящиеся`` к DNS - серверу:
+ **используется для получения IP- адреса по имени хоста**
+ **это специализированное ПО для обслуживания**
+ **это компьютер, на котором выполняется ПО для обслуживания системы доменных имен**
***
#### Для следующего IP v.4 адреса хоста:
``189.70.249.115``
#### укажите адрес сети и номер узла.

+ **Адрес сети: 189.70.0.0 Номер узла: 0.0.249.115**
***
####Для следующего IP v.4 адреса хоста:
``210.99.212.218``
#### как должна выглядеть маска сети?

Выберите один ответ:
+ **IP адрес сети: 210.99.212.218, маска сети: 255.255.255.0**
***
#### Для следующего IP v.4 адреса хоста:
``45.91.214.157``
#### укажите адрес сети и номер узла.
+ **Адрес сети: 45.0.0.0 Номер узла: 0.91.214.157**
***
#### Для следующего IP v.4 адреса хоста:
``214.160.157.132``
#### как должна выглядеть маска сети?

Выберите один ответ:
- [ ] IP адрес сети: 214.160.157.132, маска сети: 255.0.0.0
- [x] **IP адрес сети: 214.160.157.132, маска сети: 255.255.255.0**
- [ ] IP адрес сети: 214.160.157.132, маска сети: 255.255.0.0
***
#### Для следующего IP v/4 адреса хоста:
``205.225.183.233``
#### укажите, как должна выглядеть маска сети?
+ **IP адрес сети: 205.225.183.233, маска сети: 255.255.255.0**
***
#### Опишите правильную последовательность элементов структуры HTTP-запроса клиента:
+ Метод запроса - 1
+ URL - 2
+ Версия протокола HTTP - 3
+ Поля заголовка - 4
+ Пустая строка - 5
+ Тело запроса - 6
***
#### Опишите правильную последовательность элементов структуры HTTP-ответа сервера:
+ Поля заголовка - 4
+ Пояснение - 3
+ Версия протокола HTTP - 1
+ Пустая строка - 5
+ Код ответа - 2
+ Тело запроса - 6
***
**Укажите, какие утверждения относятся к IP адресу версии 4**

Выберите один или несколько ответов:

- [x] Адрес состоит из двух частей: номера сети и номера узла  
- [x] IP-адрес представляет собой 32-битное число  
- [ ] Внутри адреса разделителем является двоеточие  
- [ ] IP-адрес является 128-битным  

***
![web вариант 1](https://github.com/user-attachments/assets/b79cc6af-4f52-42a9-9f10-c4cf950a028f)

![web вариант 2](https://github.com/user-attachments/assets/bd4bbe8b-0463-4ff4-a9a9-6f05e4559d72)

![web вариант 3](https://github.com/user-attachments/assets/b8b38134-6b3f-414f-a689-00cd908cb731)

![web вариант 4](https://github.com/user-attachments/assets/4f4a10bd-a470-49cc-9fbf-65f08b3e6cac)

![web вариант 5](https://github.com/user-attachments/assets/7b737771-6cdc-4b05-b89b-8afae89e4410)

![web вариант 6](https://github.com/user-attachments/assets/646ebab3-c41f-4974-8d81-9f8f81723b0f)

![web вариант 7](https://github.com/user-attachments/assets/68b5b7ab-9c52-4a38-943b-479ce74fb89b)

