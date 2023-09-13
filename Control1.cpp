#include <iostream>
using namespace std;

int main()
{
    // 2 3 5 7 11 13 17 19 23 50
    // объявление переменной целого типа
    int x;
    cout << "number = "; cin >> x;

    // счетчик простых чисел от 2 до введенного пользователем
    int countSimpleNum = 0;
    // флаг для введенного числа. По умолчанию false.
    bool isMainNumberSimple = false;

    // цикл. подсчитываем количество простых чисел
    for (int i = 2; i <= x; i++)
    {
        // флаг для простого числа. По умолчанию true
        bool isSimple = true;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isSimple = false;
                continue;
            }
        }

        // если число простое, увеличиваем счетчик простых чисел
        if (isSimple)
            countSimpleNum++;

        /*
            если это число простое, а также является введенным пользователем,
            меняем значение флага на true
        */
        if (isSimple && i == x)
            isMainNumberSimple = true;
    }


    /*
        проверяем, является ли количество простых чисел простым числом.
    */
    bool isSimple = true;
    for (int j = 2; j <= countSimpleNum / 2; j++)
    {
        if (countSimpleNum % j == 0)
        {
            isSimple = false;
            continue;
        }
    }

    /*
        если количество простых чисел - это простое число и 
        введенное пользователем число - это простое число,
        то оно является супер простым.
    */
    if (isSimple && isMainNumberSimple)
        cout << "Number is super Simple!";
    else
        cout << "Number is not super Simple.";
}