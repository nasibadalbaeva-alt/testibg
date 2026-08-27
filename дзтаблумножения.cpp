
#include <iostream>

int main() {
    int a;
    std::cout << "Введите число для таблицы умножения: ";
    std::cin >> a;

    // Счётчик i идет от 1 до 10
    for (int i = 1; i <= 10; i++) {
        // Умножаем введённое число a на текущий шаг i
        std::cout << a << " * " << i << " = " << (a * i) << std::endl;
    }

    return 0;
}