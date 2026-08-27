#include <iostream>

int main() {
    int count = 1;

    while (count <= 3) { // Пока count меньше или равен 3...
        std::cout << "Привет! Попытка № " << count << std::endl;
        count = count + 1; // Увеличиваем счётчик на 1 (можно записать как count++)
    }

    std::cout << "Цикл завершён!" << std::endl;
    return 0;
}