#include <iostream>
int main() {
int n, sum=0;
    std::cout << "Введите целое число: " << std::endl;
    std::cin >> n;
    while (n!=0) {
    sum = sum + n % 10;
    n = n / 10;
    }
std::cout << "Сумма цифр числа равна: " << sum << std::endl;
return 0;
}