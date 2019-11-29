#include <iostream>

int main() {
    int n;
    while (n%2==0) {
    std::cout << "Введите нечетное число: " << std::endl;
    std::cin >> n;
    }
    for (int i = n; i > 0; i -= 2) {
        for (int j = 0; j < (n - i) / 2; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    for (int i = 3; i <= n ; i += 2) {
        for (int j = 0; j < (n - i) / 2; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}