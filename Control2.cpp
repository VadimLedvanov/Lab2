#include <iostream>
#include <string>
using namespace std;

int main()
{
    // русификация консоли
    system("chcp 1251");

    // объявление строковой переменной СНИЛС
    string snils;
    cout << "СНИЛС: "; cin >> snils;

    // checkNumber - контрольная сумма, которая получится в результате цикла
    int checkNumber = 0;

    // resultCheckNumber - контрольное число снилса
    string resultCheckNumber;

    for (int i = 9; i >= 1; i--)
    {
        checkNumber += ( (snils[9 - i] - 48) * i);
    }

    // подстрока - контрольное число снилса
    string subString = snils.substr(9, 2);

    // проверка контрольной суммы. 
    if (checkNumber < 100)
        resultCheckNumber = to_string(checkNumber);
    else if (checkNumber == 100 || checkNumber == 101)
        resultCheckNumber = "00";
    else if ((checkNumber % 101) < 100)
        {
            resultCheckNumber = to_string(checkNumber % 101);
            if (resultCheckNumber.length() == 1)
                resultCheckNumber = "0" + resultCheckNumber;
        }
    else if ((checkNumber % 101) == 100)
        resultCheckNumber = "00";



    if (resultCheckNumber == subString)
        cout << "True";
    else
        cout << "False";
}