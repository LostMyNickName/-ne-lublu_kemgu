/********************************************
* Лукьянов Дмитрий ПИз-211                  *   
* Использование процедур и функций          *
* Вариант 5                                 *
* Codeguid: -                               *
*********************************************/

#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>
#include <math.h>

using namespace std;

int Sum(int Arr[], int ArrSize);
int SumOfSquares(int Arr[], int ArrSize);
int SumOfCubes(int Arr[], int ArrSize);

int main()
{
    srand(time(0));
    setlocale(0, "RUS");

    const int k = 10;
    int D[k];

    for (int i = 0; i < k; ++i) {
        D[i] = 10 - rand() % 20;
        cout << setw(5) << D[i];
    }

    cout << endl << "Сумма элементов массива = " << Sum(D, k) << endl;
    cout << "Сумма квадратов элементов массива = " << SumOfSquares(D, k) << endl;
    cout << "Сумма кубов элементов массива = " << SumOfCubes(D, k) << endl;
}

int Sum(int Arr[], int ArrSize) {
    int Summa = 0;
    for (int i = 0; i < ArrSize; ++i) {
        Summa += Arr[i];
    }
    return Summa;
}

int SumOfSquares(int Arr[], int ArrSize) {
    int Summa = 0;
    for (int i = 0; i < ArrSize; ++i) {
        Summa += pow(Arr[i], 2);
    }
    return Summa;
}

int SumOfCubes(int Arr[], int ArrSize) {
    int Summa = 0;
    for (int i = 0; i < ArrSize; ++i) {
        Summa += pow(Arr[i], 3);
    }
    return Summa;
}
