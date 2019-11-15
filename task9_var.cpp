#include <iostream>

int main() {
    int n;
    std::cout << "Введите число: " << std::endl;
    std::cin >> n;

    int s = 0;

    for (int i = n; i > 0; i -= 2) {
        for (int j = 0; j < s; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
        s++;
    }

    s -= 2;

    for (int i = 3; i <= n ; i += 2) {
        for (int j = 0; j < s; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
        s--;
    }

    return 0;
}