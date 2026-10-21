#include <iostream> 
using namespace std;
int main() { 
    setlocale(LC_ALL, "Russian");

    int sum = 0;

// Перебираем числа от 1 до 199
    for (int i = 1; i < 200; i++) {
        // Если число делится на 3 без остатка
        if (i % 3 == 0) {
            sum += i;
        }
    }

    cout << "Сумма положительных чисел, кратных 3 и меньших 200: " << sum << endl;

    return 0;
}