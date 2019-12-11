#include <iostream>
void clock (int n, int s) {
    for (int i = n; i > 0; i -= 2) {
        for (int j = 0; j < ((n - i) / 2 + s); j++) {
            std::cout << " ";
        }
        for (int j = 0; j < i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    for (int i = 3; i <= n ; i += 2) {
        for (int j = 0; j < ((n - i) / 2) + s; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
int main () {
    int l, m;
    std::cout << "Введите размер часиков: " << std::endl;
    std::cin >> l;
     std::cout << "Введите размер отступа: " << std::endl;
    std::cin >> m;
    clock( l, m);
    return 0;
}