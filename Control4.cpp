#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251");
	// n - количество очков, до которых игра продолжается
	int n = 30;
	// score - набранные за выстрел очки
	int score = 0;

	cout << "Запуск игры..." << endl;

	// i - счетчик выстрелов
	int i = 0;
	while (score <= n - 1)
	{
		i++;
		double x, y;
		cout << "Выстрел #" << i << ": ";
		cin >> x >> y;

		// shootCord - координаты пули
		double shootCord = x * x + y * y;
		if (shootCord <= 1)
			score += 10;
		else if (shootCord > 1 && shootCord <= 4)
			score += 5;
		else if (shootCord > 4 && shootCord <= 9)
			score += 1;
	}

	cout << "----------" << endl;
	cout << "game over!" << endl;
	cout << "your scores: " << score << endl;
	cout << "your level: ";

	// процент попаданий - proportion
	double proportion = 1.0 * (n / 10) / i * 100;
	if (proportion >= 90)
		cout << "sniper (" << "accuracy: " << proportion << "%" << ")";
	else if (proportion >= 75 && proportion < 90)
		cout << "simple shooter (" << "accuracy: " << proportion << "%" << ")";
	else if (proportion >= 50 && proportion < 75)
		cout << "beginner (" << "accuracy: " << proportion << "%" << ")";
	else
		cout << "shooting is not your thing (" << "accuracy: " << proportion << "%" << ")";
}