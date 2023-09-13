#include <iostream>
using namespace std;

int main()
{
    // 1, 2, 5, 10, 100, 200, 500, 1000, 2000, 5000
    // 1, 5, 10, 50
    system("chcp 1251");
    int amount;
    cout << "amount = "; cin >> amount;
    
    // жадный алгоритм.
    cout << "Выдаем amount...\n";
    while (amount != 0) {
      
        if (10 <= amount)
        {
            cout << "10\n";
            amount -= 10;
        }
        else if (5 <= amount) {
            cout << "5\n";
            amount -= 5;
        }
        else if (2 <= amount) {
            cout << "2\n";
            amount -= 2;
        }
        else if (1 <= amount) {
            cout << "1\n";
            amount -= 1;
        }
    }
}
