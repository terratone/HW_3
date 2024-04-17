#include <iostream>

/*Напишите программу, которая вычисляет сумму целых
чисел от а до 500 (значение a вводится с клавиатуры).*/

using namespace std;

int main() {
    int a;
    cout << "Input 'a' value: ";
    cin >> a;

    if (a < 500) {
        int sum = 0;
        for (int i = a; i <= 500; ++i) {
            sum += i;
        }
        cout << "Sum of numbers from " << a << " to 500 equals: " << sum << endl;
    }
    else {
        cout << "The number must be less than 500." << endl;
    }

    return 0;
}