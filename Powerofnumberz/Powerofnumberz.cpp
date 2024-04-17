#include <iostream>

using namespace std;

// Функция для вычисления степени числа x в степени y
int power(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; ++i) {
        result *= x;
    }
    return result;
}

int main() {
    int x, y;

    cout << "Enter the integer X: ";
    cin >> x;

    cout << "Enter the integer Y(power) ";
    cin >> y;

    int result = power(x, y);
    cout << x << " in power of " << y << " is " << result << endl;

    return 0;
}