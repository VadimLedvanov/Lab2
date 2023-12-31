﻿#include <iostream>
#include <ctime> // заголовочный файл для работы с временем.
using namespace std;

int main()
{
    /* 
        srand() - функция для установки базы генератора псевдослучайных чисел
        time(NULL) - аргумент этой функции, который позволяет установить текущее время,
        чтобы установить его в качестве базы для непредсказуемости результата генерации чисел 
    */
    srand(time(NULL));
    
    // объявление и инициализация целочисленных переменных
    int a, b, c;
    int k = 0, n = 10;

    for (int i = 1; i <= n; i++)
    {
        // инициализация операндов случайными числами от 1 до 10
        // rand() возвращает случайно число от нуля до 2 147 483 647
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        cout << a << " * " << b << " = ";
        cin >> c;

        if (a * b != c)
        {
            k++; // инкремент
            cout << "Error! ";
            cout << a << " * " << b << " = " << a * b << endl;
        }
    }


    cout << "Count error: " << k << endl;
    return 0;
}
