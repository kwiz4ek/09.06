#include <iostream>

int main() {
    int A;
    std::cout << "Введіть ціле число A: ";
    std::cin >> A;

    int sum = 0;
    int number = (A >= 0) ? A : -A; 

    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }

    int cube = sum * sum * sum;

    if (cube == A * A) {
        std::cout << "Куб суми цифр числа дорівнює A*A" << std::endl;
    }
    else {
        std::cout << "Куб суми цифр числа НЕ дорівнює A*A" << std::endl;
    }

    return 0;
}
