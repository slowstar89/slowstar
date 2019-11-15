#include <iostream>
int main() {
    int n;
    std::cout << "Введите число: " << std::endl;
    std::cin >> n;
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        if (i == (n - j - 1) ) {
            std::cout << "*";
        } else {
            std::cout << ".";
        }
        }
        std::cout << std::endl;
}
return 0;
}    