#include <iostream>
int main() {
int n, f = 1, i = 1;
std::cout << "Введите целое число: " << std::endl;
std::cin >> n;
while ( i <= n) {
    f = f * i;
    i++;
}
std::cout << "Факториал числа n = " << f << std::endl;
return 0;
}