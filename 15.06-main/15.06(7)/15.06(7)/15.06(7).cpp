#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number1, number2;
    std::cout << "Введіть перше ціле число: ";
    std::cin >> number1;
    std::cout << "Введіть друге ціле число: ";
    std::cin >> number2;

    std::cout << "Числа, на які обидва введені числа діляться без залишку: ";
    for (int i = 1; i <= number1 && i <= number2; i++) {
        if (number1 % i == 0 && number2 % i == 0) {
            std::cout << i << " ";
        }
    }

    return 0;
}
