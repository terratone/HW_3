/* Найти среднее арифметическое всех целых чисел от 1 до 1000. */

#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int count = 0;

    for (int i = 1; i <= 1000; ++i) {
        sum += i;
        count++;
    }

    double average = sum / count;

    cout << "The arithmetic mean of numbers from 1 to 1000 is: " << average << endl;

    return 0;
}