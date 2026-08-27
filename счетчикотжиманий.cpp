#include <iostream>
int main() {
    int a;
    std::cout << "Введите число: ";
    std::cin >> a;

  for (int i = 1; i <= a; i++) {
    std::cout <<"Число № " << i << std::endl;
}

std::cout << "Нажмите Enter, чтобы закрыть программу...";
std::cin.ignore();
std::cin.get();
return 0;
}  