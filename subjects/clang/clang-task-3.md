# Таск 3
### Указатели, указатели и еще раз указатели
Как правило в заданиях требовалось каким-либо образом изменить массив
```cpp
#include <iostream>
using namespace std;

void reverse_rows(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int* start = matrix[i];          
        int* end = matrix[i] + cols - 1; 
        
        while (start < end) {
            int temp = *start;
            *start = *end;
            *end = temp;
            
            start++;
            end--;
        }
    }
}

int main() {
    const int rows = 4;
    const int cols = 3;
    
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = i * cols + j;
        }
    }
    
    cout << "матрица до:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    reverse_rows(matrix, rows, cols);
    
    cout << "\nматрица после:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    
    return 0;
}
```
