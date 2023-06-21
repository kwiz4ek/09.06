#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;
    std::cout << "Введіть ціле число: ";
    std::cin >> number;

    std::cout << "Числа, на які " << number << " ділится без останку: ";
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            std::cout << i << " ";
        }
    }

    return 0;
}
