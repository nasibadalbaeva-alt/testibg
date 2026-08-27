#include <iostream>

int main() {
    int secret = 50; // загаданное число
    int guess = 0; // сюда сохраняем догадку пользователя

    std::cout << "--- ИГРА УГАДАЙ ЧИСЛО ---\n" << std::endl;
    
    // Цикл продолжается, пока догадка не совпадёт с загаданным числом
    while (guess != secret) {
        std::cout << "Введите вашу догадку: ";
        std::cin >> guess; // получаем догадку пользователя

        if (guess < secret) {
            std::cout << "Слишком маленькое число! Попробуйте ещё раз.\n" << std::endl;
        } else if (guess > secret) {
            std::cout << "Слишком большое число! Попробуйте ещё раз.\n" << std::endl;
        } else {
            std::cout << "Поздравляем! Вы угадали число " << secret << "!\n" << std::endl;
        }
    }

    std::cout << "Нажмите Enter, чтобы закрыть программу...";
std::cin.ignore();
std::cin.get();
    return 0;
}