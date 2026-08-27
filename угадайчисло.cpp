#include <iostream>

int main() {
    int secret = 50;
    int guess;

    std::cout << "Угадайте число от 1 до 100: ";
    std::cin >> guess;

    if (guess == secret) {
        std::cout << "Поздравляем вы угадали число!" << std::endl;
    } else if (guess < secret) {
        std::cout << "Ваше число меньше загаданного." << std::endl;
    } else {
        std::cout << "Ваше число больше загаданного." << std::endl;
    }
    
   std::cout << "Нажмите Enter, чтобы закрыть программу...";
std::cin.ignore();
std::cin.get();
    return 0;
}