

#include <iostream>


using namespace std;

int main()
{
    // русификация консоли
    system("chcp 1251");
    cout << "Введите координаты х, у точки: ";
    // объявление вещественных переменных
    double x, y;
    cin >> x >> y;
    
    // условная конструкция if - else:
    if (x * x + y * y < 9 && y > 0)
        cout << "внутри";
    else if (x * x + y * y > 9 || y < 0)
        cout << "снаружи";
    else cout << "на границе";
}