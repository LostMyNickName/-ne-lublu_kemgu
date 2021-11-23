#define _USE_MATH_DEFINES
#define g 9.8075

#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

double input(double* a, double* h, double* b, double* h0, double* d);

int main(){
    setlocale(0, "RUS");
   
    double a = 3.52,
        h = 1.27,
        b = 150 * 0.001,
        h0 = 0.635,
        d = 36 * 0.001,
        t = 0,
        m = 0.82,
        f = 0,
        F = 0,
        F0 = 0,
        K = 0;
    int choiseInp = 0;
   
    cout << "ОПА МЕНЮШКА 0_o\n"; //Просто потому что хочу
    do {
        cout << "1. Хочу использовать циферки как в задаче\n2. Хочу ввести циферки руками\n";
        cin >> choiseInp;

        if (choiseInp < 1 || choiseInp > 2)
            cout << "Нет такого варианта\n";
    } while (choiseInp < 1 || choiseInp > 2);

    if (choiseInp == 2)
        input(&a,&h,&b,&h0,&d);

    f = (M_PI * pow(d, 2)) / 4;
    F0 = pow(a, 2);
    F = pow(a - (2 * b), 2);
    K = sqrt(h0 - b) - sqrt(h - b - (h - h0) * (F0 / F));
    t = ((2 * K) / (m * f * sqrt(2 * g))) * ((F0 * F) / (F0 - F));
    cout << "Ответ: t = " << t << endl; 
    //Промазал с ответом где-то на 0.6, но я думаю енто не страшно
    return 0;
}

double input(double* a, double *h, double *b, double *h0, double *d) {
    cout << "Введите a (в метрах) = ";
    cin >> *a;
    cout << "Введите h (в метрах) = ";
    cin >> *h;
    cout << "Введите b (в миллиметрах) = ";
    cin >> *b;
    *b *= 0.001;
    cout << "Введите h0 (в метрах) = ";
    cin >> *h0;
    cout << "Введите d (в миллиметрах) = ";
    cin >> *d;
    *d *= 0.001;
    return 0;
}

