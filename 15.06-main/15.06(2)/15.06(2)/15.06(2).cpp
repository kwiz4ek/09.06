#include <iostream>

int main() {
    int count = 0;

    for (int num = 100; num <= 999; ++num) {
        int hundreds = num / 100;
        int tens = (num / 10) % 10;
        int units = num % 10;

        if (hundreds != tens && hundreds != units && tens != units) {
            count++;
        }
    }

    std::cout << "Количество чисел с разными цифрами: " << count << std::endl;

    return 0;
}
