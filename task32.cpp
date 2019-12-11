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
    int l, m = 0, n;
    std::cout << "Введите размер часиков: " << std::endl;
    std::cin >> n;
    for (int l = n; l >= 1; l-=2) {
        clock(l, m);
        m = m + 1;
    }
    m = m - 2;
    for (int l = 3; l <= n; l+=2) {
        clock(l, m);
        m = m - 1;
    }
return 0;
}