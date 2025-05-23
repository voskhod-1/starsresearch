[Назад](clang.md)
# Таск 3
### Указатели, указатели и еще раз указатели
Как правило в заданиях требовалось каким-либо образом изменить массив
```cpp
#include <iostream>
#include <cstring>
using namespace std;


void deleteArray(int** arr) {
    delete[] * arr;
    delete[] arr;
}
void printArray(int** arr, int ROW, int COL) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            cout << *(*(arr + i) + j) << "\t";
        }
        cout << endl;
    }
}
int** removeOddRows(int** arr, int row, int col, int newRowCount) {
    int* newLine = new int[newRowCount * col];
    int** newArr = new int* [newRowCount];

    int newIndex = 0;
    for (int i = 1; i < row; i += 2) {
        for (int j = 0; j < col; j++) {
            *(newLine + newIndex * col + j) = *(*(arr + i) + j);
        }
        *(newArr + newIndex) = newLine + newIndex * col;
        newIndex++;
    }

    return newArr;
}
int** createArr(int row, int col) {
    int* line = new int[row * col];
    for (int i = 0; i < row * col; i++) {
        *(line + i) = rand() % 99;
    }
    int** arr = new int* [row];
    for (int i = 0; i < row; i++) {
        *(arr + i) = line + col * i;
    }
    return arr;
}
int main()
{
    int row = 4, col = 4;
    int** arr = createArr(row, col);
    cout << "Original array " << endl;
    printArray(arr, row, col);


    int newRowCount = row / 2;
    int** secondArr = removeOddRows(arr, row, col, newRowCount);

    cout << "\nArray after removing odd rows " << endl;
     printArray(secondArr, newRowCount, col);

    deleteArray(arr);
    deleteArray(secondArr);

    return 0;

    return 0;

}
```
```cpp
// Task3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

// Подключаем необходимые библиотеки
#include <iostream>
#include <cstdlib> // Для функций rand() и srand()
#include <ctime> // Для функции time()

using namespace std; // Используем стандартное пространство имен

// Функция для печати двумерного массива
void printArray(int** arr, int rows, int cols) {
    // Перебираем все строки матрицы
    for (int i = 0; i < rows; i++) {
        // Перебираем все элементы в текущей строке
        for (int j = 0; j < cols; j++) {
            // Выводим элемент через разыменование указателей
            cout << *(*(arr + i) + j) << "\t"; // Вывод с табуляцией
        }
        cout << endl; // Переход на новую строку после вывода строки матрицы
    }
}

// Функция создания динамического двумерного массива
int** createArray(int rows, int cols) {
    // Выделяем память под массив указателей на строки
    int** arr = new int* [rows];

    // Заполняем массив
    for (int i = 0; i < rows; i++) {
        *(arr + i) = new int[cols]; // Выделяем память для каждой строки

        // Заполняем строку случайными числами
        for (int j = 0; j < cols; j++) {
            // Присваиваем случайное значение от 0 до 99
            *(*(arr + i) + j) = rand() % 99;
        }
    }
    return arr; // Возвращаем созданный массив
}

// Функция освобождения памяти, занятой массивом
void deleteArray(int** arr, int rows) {
    // Удаляем каждую строку
    for (int i = 0; i < rows; i++) {
        // Освобождаем память, выделенную для i-й строки
        delete[] * (arr + i);
    }
    // Освобождаем память, выделенную под массив указателей
    delete[] arr;
}

// Функция для разворота относительно строк
void reverseRows(int** arr, int rows, int cols) {
    // Перебираем все строки матрицы
    for (int i = 0; i < rows; i++) {
        // Получаем указатель на текущую строку
        int* row = *(arr + i);
        // Разворачиваем строку
        for (int j = 0; j < cols / 2; j++) {
            int temp = *(row + j); // Сохраняем значение из начала строки            
            *(row + j) = *(row + cols - 1 - j); // Заменяем элемент из начала соответствующим элементом с конца
            *(row + cols - 1 - j) = temp; // Восстанавливаем сохраненное значение в конец строки
        }
    }
}

// Функция для разворота относительно столбцов
void reverseColumns(int** arr, int rows, int cols) {
    // Перебираем все столбцы матрицы
    for (int j = 0; j < cols; j++) {
        // Обмениваем элементы в столбце j от начала к середине
        for (int i = 0; i < rows / 2; i++) {
            int temp = *(*(arr + i) + j); // Сохраняем значение из начала столбца
            *(*(arr + i) + j) = *(*(arr + rows - 1 - i) + j); // Меняем с концом
            *(*(arr + rows - 1 - i) + j) = temp; // Восстанавливаем сохраненное
        }
    }
}

int main() {
    const int rows = 4; // Количество строк матрицы
    const int cols = 4; // Количество столбцов матрицы

    srand(time(0)); // Инициализация генератора случайных чисел текущим временем
    int** arr = createArray(rows, cols); // Создаем двумерный массив

    // Выводим исходную матрицу
    cout << "Исходная матрица:" << endl;
    printArray(arr, rows, cols);
    // Первый разворот (по строкам)
    reverseRows(arr, rows, cols);
    cout << "\nМатрица после разворота строк:" << endl;
    printArray(arr, rows, cols);
    // Второй разворот (по столбцам)
    reverseColumns(arr, rows, cols);
    cout << "\nМатрица после разворота столбцов:" << endl;
    printArray(arr, rows, cols);
    deleteArray(arr, rows); // Освобождаем выделенную память
    return 0; // Завершение программы
}
```
