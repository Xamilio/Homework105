#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru");
    const int size = 10;
    int array1[size];
    int array2[size];
    cout << "Введіть 10 двозначних чисел:" << endl;
    for (int i = 0; i < size; i++) 
    {
        cin >> array1[i];
    }
    for (int i = 0; i < size; i++) 
    {
        int tens = array1[i] / 10;
        int units = array1[i] % 10;
        array2[i] = tens + units;
    }
    for (int gap = size / 2; gap > 0; gap /= 2) 
    {
        for (int i = gap; i < size; i++)
        {
            int temp = array2[i];
            int j;
            for (j = i; j >= gap && array2[j - gap] > temp; j -= gap) 
            {
                array2[j] = array2[j - gap];
            }
            array2[j] = temp;
        }
    }
    cout << "Масив із сум цифр після сортування: ";
    for (int i = 0; i < size; i++) 
    {
        cout << array2[i] << " ";
    }
    cout << endl;
}

