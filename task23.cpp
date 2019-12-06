#include <iostream>
int main() {
int n, f = 1;
std::cout << "Введите целое число: " << std::endl;
std::cin >> n;
for (int i = 1; i <= n; i++) {
    f = f * i;
}
std::cout << "Факториал числа n = " << f << std::endl;
return 0;
}