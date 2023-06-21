#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    int A;
    std::cout << "Введіть ціле число A: ";
    std::cin >> A;

    std::cout << "Цілі числа B, для яких A ділиться без залишку на B^2 і не ділиться без залишку на B^3:\n";
    for (int B = 1; B <= A; B++) {
        if (A % (B * B) == 0 && A % (B * B * B) != 0) {
            std::cout << B << " ";
        }
    }

    return 0;
}
