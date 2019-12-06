#include <iostream>
int factorial (int x) {
    int f = 1;
    for (int i = 1; i <= x; i++) {
        f*=i;
    }
    return f;
}
int main() {
int n, f;
std::cout << "Введите целое число: " << std::endl;
std::cin >> n;
f = factorial(n);
std::cout << "Факториал числа n = " << f << std::endl;
}