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
