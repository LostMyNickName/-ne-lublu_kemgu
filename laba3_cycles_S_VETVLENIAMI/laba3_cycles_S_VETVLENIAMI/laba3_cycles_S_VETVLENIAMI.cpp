﻿/****************************************************************************************
* Лукьянов Дмитрий ПИз-211                                                              *
* Циклы с ветвлениями                                                                   *
* Вариант 5                                                                             *
* Codeguid: Дико извиняюсь, но я уже не переучусь по новому писать, да и вроде красиво  *
* https://vk.cc/c8gZ1G //не очень помню что должно было быть в этой ссылке              *
*****************************************************************************************/
#define g 9.81

#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <clocale>

using namespace std;

int main(){
    setlocale(0, "RUS");

    double Nu = 0,
        //Gr = 0,
        b = 0.000015,
        tg = 500,
        tw = 15;
    //cout << b << endl;
    int Gr = 0; // В double числа не помещаются (В long double тоже(чем они вообще отличаются?))

    vector<double>d = { 0.1, 0.2, 0.25, 0.275, 0.3 }; //я просто люблю вектора

    for (auto it = d.begin(); it != d.end(); it++) {
       // *it *= 100;
        Gr = ((g * pow(*it, 3)) / pow(b, 2)) * ((tg - tw) / (tw + 273)); //Маленькая погрешность присутствует
        if (Gr < pow(10, 9))                                             //Предположение: из-за типа int
            Nu = 0.76 * pow(Gr, 0.22);                                   //Или из-за того, что в b не помещается 0.000015
        else if (Gr > pow(10, 9))                                        //Или из-за того, что у меня туго с математикой
            Nu = 0.15 * pow(Gr, 0.35);
        else {
            Nu = 0;
            cout << "\nБИП-БУП. ОШИБКА. Gr = 10^9\n";
        }
        cout<<"Gr = "<<left<< setw(20) << Gr << "Nu = " << Nu << endl;
    }
}
