#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    const int n = 10;
    const double eps = 0.0001;
    const double ln3 = log(3.0);

    const double xStart = 0.1;
    const double xEnd = 1.0;
    const double step = (xEnd - xStart) / n;

    cout << fixed << setprecision(6);

    cout << "Лабораторная работа №3" << endl;
    cout << "Вариант 1. Вычисление функции y = 3^x" << endl;
    cout << "-----------------------------------------------" << endl;

    cout << "    x       SN          SE          Y" << endl;

    for (int i = 0; i <= n; i++)
    {
        double x = xStart + i * step;

        // Вычисление суммы с фиксированным числом членов
        double SN = 1.0;
        double term = 1.0;

        for (int k = 1; k <= n; k++)
        {
            term *= (x * ln3) / k;
            SN += term;
        }

        // Вычисление суммы с заданной точностью
        double SE = 1.0;
        term = 1.0;
        int k = 1;

        while (fabs(term) > eps && k < 10000)
        {
            term *= (x * ln3) / k;
            SE += term;
            k++;
        }

        // Точное значение функции
        double Y = pow(3.0, x);

        cout << setw(7) << x
             << setw(12) << SN
             << setw(12) << SE
             << setw(12) << Y << endl;
    }

    return 0;
}