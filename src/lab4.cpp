#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    srand(static_cast<unsigned int>(time(0)));

    int N;

    cout << "Лабораторная работа №4" << endl;
    cout << "Вариант 1. Работа с одномерными массивами" << endl;

    cout << "Введите количество элементов массива: ";
    cin >> N;

    if (N <= 0 || N > 100)
    {
        cout << "Ошибка! Размер массива должен быть от 1 до 100." << endl;
        return 1;
    }

    vector<int> a(N);

    // Формирование случайного массива
    for (int i = 0; i < N; i++)
    {
        a[i] = rand() % 21 - 10;
    }

    // Вывод исходного массива
    cout << "\nИсходный массив:" << endl;

    for (int x : a)
    {
        cout << x << " ";
    }

    cout << endl;

    // Удаление элемента с номером K
    int K;

    cout << "\nВведите номер элемента K для удаления (от 0 до "
         << N - 1 << "): ";
    cin >> K;

    if (K < 0 || K >= N)
    {
        cout << "Ошибка! Такого элемента нет." << endl;
        return 1;
    }

    a.erase(a.begin() + K);

    cout << "\nМассив после удаления элемента:" << endl;

    for (int x : a)
    {
        cout << x << " ";
    }

    cout << endl;

    // Добавление нуля после каждого четного элемента
    vector<int> result;

    for (int x : a)
    {
        result.push_back(x);

        if (x % 2 == 0)
        {
            result.push_back(0);
        }
    }

    cout << "\nИтоговый массив:" << endl;

    for (int x : result)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}