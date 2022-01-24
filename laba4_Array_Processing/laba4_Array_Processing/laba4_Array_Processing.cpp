/****************************
* Лукьянов Дмитрий ПИз-211  *
* Обработка массивов        *
* Вариант 5                 *
* Codeguid: -               *
*****************************/

#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(0, "RUS");
	srand(time(0));

	const int col = 7, row = 5;
	int F[col][row];

	for (int i = 0; i < col; ++i) {
		for (int j = 0; j < row; ++j) {
			F[i][j] = 100 - rand() % 200;
		}
	}

	cout << "Исходная матрица:\n";

	for (int i = 0; i < col; ++i) {
		for (int j = 0; j < row; ++j) {
			cout <<setw(5) << F[i][j];
		}
		cout << endl;
	}

	cout << "Измененная матрица:\n";

	for (int i = 0; i < col; ++i) {
		for (int j = 0; j < row; ++j) {
			if (F[i][j] < 0) //да ну религия не позволяет ставить фигурную скобку, когда можно не ставить
				F[i][j] = 0;

			cout << setw(5) << F[i][j];
		}
		cout << endl;
	}
}

