#include <iostream>
using namespace std;

int main()
{
    // объявление и инициализация переменных
    int k, m, sum = 0;
    cout << "k = "; cin >> k;
    cout << "m = "; cin >> m;

    // цикл for от 1 до 100
    for (int i = 1; i <= 100; i++)
    {
        if (i > k && i < m)
            continue; // оператор перехода к следующей итерации
        sum += i;
    }
    cout << "Sum = " << sum;
}
