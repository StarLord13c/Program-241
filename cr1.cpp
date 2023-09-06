#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void main()
{
    srand(static_cast<unsigned int>(std::time(nullptr)));
    setlocale(LC_ALL, "ukr");

    int size1, size2, carry=0;
    cout << "Введіть розмір першого масиву: ";
    cin >> size1;
    cout << "Введіть розмір другого масиву: ";
    cin >> size2;
    int* array1 = new int[size1];
    int* array2 = new int[size2];

    cout << "Перший масив: ";
    for (int i = 0; i < size1; i++) 
    {
        array1[i] = rand() % 10;
        cout << array1[i];
    }
    cout << "\n" << "Другий масив: ";
    for (int i = 0; i < size2; i++)
    {
        array2[i] = rand() % 10;
        cout << array2[i];
    }
    cout << "\n";
    
    int max_size = max(size1, size2);
    int* result = new int[max_size];
    for (int i = max_size - 1, j = size1 - 1, k = size2 - 1; i >= 0; i--, j--, k--)
    {
        int sum = (j >= 0 ? array1[j] : 0) + (k >= 0 ? array2[k] : 0) + carry;
        if (sum >= 10)
        {
            carry = 1;
            sum -= 10;
        }
        else
        {
            carry = 0;
        }
        result[i] = sum;
    }

    cout << "Результат: ";
    for (int i = 0; i < max_size; i++) 
    {
        cout << result[i];
    }

	cout << "\n";
	system("pause");
}
