#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;
    std::cout << "Введіть ціле число: ";
    std::cin >> number;

    int result = 0;
    int multiplier = 1;

    while (number != 0) {
        int digit = number % 10;
        if (digit != 3 && digit != 6) {
            result += digit * multiplier;
            multiplier *= 10;
        }
        number /= 10;
    }

    std::cout << "Результат: " << result << std::endl;

    return 0;
}
