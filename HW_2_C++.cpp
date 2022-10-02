#include <iostream>

int main() {
    std::cout << "сейчас мы поможем тебе вычислить квадрат!\n";
    int a;
    std::cout << "введи число: ";
    std::cin >> a;

    int square = a * a;
    std::cout << "вот он, квадрат твоего числа: " << square << "\n";
}