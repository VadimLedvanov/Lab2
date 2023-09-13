#include <iostream>

int main()
{
    system("chcp 1251");
    //объявление целочисленных переменных   
    int a, b, temp;

    // ввод значений переменных а и b
    std::cout << "a = "; std::cin >> a;
    std::cout << "b = "; std::cin >> b;

    // Алгоритм Евклида с помощью цикла с предусловием
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }

    std::cout << "НОД = " << a << std::endl;
}