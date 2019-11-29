#include <iostream>

int main() {
    int n, sum=0;
    std::cout << "Введите число: " << std::endl;
    std::cin >> n;
    do {
    sum = sum + n;
    std::cout << "Введите число: " << std::endl;
    std::cin >> n;
    } while (sum < 100);
    std::cout << sum << std::endl;
    return 0;
}