#include <iostream>

int main() {
    int temperature;
    std::cout << "Введите температуру в градусах Цельсия: ";
    std::cin >> temperature;

    if (temperature < 0) {
        std::cout << "Температура ниже нуля. На улице холодно." << std::endl;
    } else if (temperature >= 0 && temperature <= 20) {
        std::cout << "Температура в пределах нормы. На улице прохладно." << std::endl;
    } else {
        std::cout << "Температура выше 20 градусов. На улице тепло." << std::endl;
    }
    
    std::cout << "Нажмите Enter, чтобы закрыть программу...";
std::cin.ignore();
std::cin.get();
    return 0;
}