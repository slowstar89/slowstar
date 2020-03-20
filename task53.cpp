#include <iostream>
#include <vector>

int main() {
    int n = 3, row, col;
    std::vector <std::vector<char> > game(n, std::vector<char>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << "+" << "-";
        }
        std::cout << "+" << std::endl;
        for (int i = 0; i < n; i++) {
            std::cout << "|" << " ";
        }
        std::cout << "|" << std::endl;
    }
    for (int j = 0; j < n; j++) {
            std::cout << "+" << "-";
        }
    std::cout << "+" << std::endl;
    std::cout << "Ваш ход, Х " << std::endl << "Введите номер стоки: " << std::endl;
    std::cin >> row;
    std::cout << "Введите номер стоки: " << std::endl;
    std::cin >> col;
    
    return 0;
}