#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
using namespace std;

void printArray(int* arr, int size) 
{
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i];
    }
}

void fillArray(int* arr, int size) 
{
    for (int i = 0; i < size; i++) 
    {
        arr[i] = rand() % 10;
    }
}

int* addArrays(int* array1, int size1, int* array2, int size2, int& resultSize) {
    int max_size = max(size1, size2);
    int* result = new int[max_size];
    int carry = 0;

    for (int i = max_size - 1, j = size1 - 1, k = size2 - 1; i >= 0; i--, j--, k--) {
        int sum = (j >= 0 ? array1[j] : 0) + (k >= 0 ? array2[k] : 0) + carry;
        if (sum >= 10) {
            carry = 1;
            sum -= 10;
        }
        else {
            carry = 0;
        }
        result[i] = sum;
    }

    if (carry > 0) {
        resultSize = max_size + 1;
        int* finalResult = new int[max_size + 1];
        finalResult[0] = carry;
        for (int i = 0; i < max_size; i++) {
            finalResult[i + 1] = result[i];
        }
        delete[] result;
        return finalResult;
    }

    resultSize = max_size;
    return result;
}

int* subtractArrays(int* array1, int size1, int* array2, int size2, int& resultSize) {
    int max_size = max(size1, size2);
    int* result = new int[max_size];
    int carry = 0;

    for (int i = max_size - 1, j = size1 - 1, k = size2 - 1; i >= 0; i--, j--, k--) {
        int sub = (j >= 0 ? array1[j] : 0) - (k >= 0 ? array2[k] : 0) - carry;
        if (sub < 0) {
            carry = 1;
            sub += 10;
        }
        else {
            carry = 0;
        }
        result[i] = sub;
    }

    resultSize = max_size;
    return result;
}

int main() 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand(static_cast<unsigned int>(time(nullptr)));

    int size1, size2, choice;
    cout << "Введіть розмір першого масиву: ";
    cin >> size1;
    cout << "Введіть розмір другого масиву: ";
    cin >> size2;

    int* array1 = new int[size1];
    int* array2 = new int[size2];

    cout << "Перший масив: ";
    fillArray(array1, size1);
    printArray(array1, size1);

    cout << "\nДругий масив: ";
    fillArray(array2, size2);
    printArray(array2, size2);

    cout << "\nВиберіть операцію (1 - додавання, 2 - віднімання): ";
    cin >> choice;

    int resultSize;
    int* result;

    if (choice == 1) 
    {
        result = addArrays(array1, size1, array2, size2, resultSize);
        cout << "Результат додавання: ";
    }
    else if (choice == 2) 
    {
        result = subtractArrays(array1, size1, array2, size2, resultSize);
        cout << "Результат віднімання: ";
    }
    else 
    {
        cout << "Неправильний вибір операції.\n";
        return 1;
    }

    printArray(result, resultSize);

    cout << "\n";
    system("pause");
    return 0;
}
