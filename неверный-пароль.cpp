#include <iostream>

int main() {
    int secretCode = 777;
    std::cout << "Введите секретный код: ";
    std::cin >> secretCode;

    if (secretCode == 777) {
        std::cout << "Доступ разрешен!" << std::endl;
    } else {
        std::cout << "Доступ запрещен!" << std::endl;
    }
    return 0;
}