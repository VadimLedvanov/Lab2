﻿#include <iostream>


int main()
{
    system("chcp 1251");
    char op;
    std::cout << "Сделай свой выбор, собери авто своей мечты: ";
    std::cin >> op;

    // Оператор switch. оператор break - необязателен.
    switch (op)
    {
        // случай, когда переменная op хранит символ 'S'
        case 'S':
            std::cout << "Радио играть должно\n";
        // случай, когда переменная op хранит символ 'V'
        case 'V':
            std::cout << "Кондиционер хочу\n";
        // код ниже выполнится, если переменная op не хранит 'S' и 'V' символы.
        default:
            std::cout << "Колеса круглые\n";
            std::cout << "Мощный двигатель\n";

    }
}