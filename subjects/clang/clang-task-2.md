[Назад](clang.md)
***
Советы:
1. Не используйте string, c_str. Только массивы, указатели, int, char.
2. Находите длину не через std::size(), а через sizeof(arr)/sizeof(int/char)
3. Используйте цикл(по необходимости) ```for (int *i = arr, *out = arr_out; i < &arr[len]; i+=2) ```
***
```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4}; // 12123434
    int len = sizeof(arr) / sizeof(int);
    int arr_out[len * 2];
    int out_index = 0;

    for (int *i = arr, *out = arr_out; i < &arr[len]; i +=2) {
        *out++ = *i;
        *(out++) = *(i+1);
        *(out++) = *i;
        *(out++) = *(i+1);
        /*for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                arr_out[out_index++] = *i+k;
            }
        }*/
    }

    for (int iter = 0; iter < len*2; iter++) {
        cout << arr_out[iter];
    }
    cout << endl;

    return 0;
}
```
```cpp
#include <iostream>
using namespace std;

void removeEverySecondTriad(char* input) {
    char* p = input;
    char* q = input;

    while (*q != '\0') {
        int i = 0;
        while (i < 3 && *q != '\0') {
            *p = *q;
            p++;
            q++;
            i++;
        }
    
        if (*q != '\0') {
            q += 3;
        }
    }
    *p = '\0';
}

int main() {
    setlocale(LC_ALL, "Russian");
    char input[] = "abcdefgh"; 
    cout << "Исходная строка: " << input << endl;  
    removeEverySecondTriad(input);   
    cout << "Результирующая строка: " << input << endl;
    return 0;
}
```
```cpp
#include <iostream>
#include <cstring>

void duplicateCharsWithCharArray(char* input) {
    size_t len = strlen(input);
    
    char* result = new char[len * 2 + 1]; // +1 
    
    char* src = input;
    char* dest = result;
    
    while (*src != '\0') {
        *dest++ = *src;
        *dest++ = *src++;
    }
    *dest = '\0'; 
    
    std::cout << result << std::endl;
    
    delete[] result;
}

int main() {
    char str[] = "abc";
    duplicateCharsWithCharArray(str);
    return 0;
}
```
```cpp
#include <iostream>
#include <cstring>
#include <locale>
using namespace std;

int main() {
    locale::global(locale("")); // Системная локаль
    wcout.imbue(locale());      // Для широкого вывода (если нужно)

    char input[256];  // Буфер для ввода
    char output[512]; // Выходной буфер (вдвое больше, т.к. дублируем символы)

    cout << "Введите строку: ";
    cin.getline(input, sizeof(input)); // Читаем строку с пробелами

    const char* src = input;  // Указатель на input
    char* dst = output;       // Указатель на output

    while (*src != '\0') {
        const char* triplet_start = src; // Запоминаем начало тройки

        // Копируем 3 символа (или меньше)
        for (int i = 0; i < 3 && *src != '\0'; ++i) {
            *dst++ = *src++; // Копируем и двигаем указатели
        }

        src = triplet_start; // Возвращаемся к началу тройки

        // Дублируем те же 3 символа
        for (int i = 0; i < 3 && *src != '\0'; ++i) {
            *dst++ = *src++; // Копируем ещё раз
        }
    }

    *dst = '\0'; // Завершаем строку

    cout << output << endl;

    return 0;
}
```
