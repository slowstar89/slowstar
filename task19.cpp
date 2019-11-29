#include <iostream>

int main() {
    int n, sum=1;
    std::cout << "Введите число: " << std::endl;
    std::cin >> n;
    do {
    sum = sum * n;
    std::cout << "Введите число: " << std::endl;
    std::cin >> n;
    } while (n!=0);
    std::cout << sum << std::endl;
    return 0;
}