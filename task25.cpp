#include <iostream>
int main() {
int n, f = 1, i = 1;
std::cout << "Введите целое число: " << std::endl;
std::cin >> n;
do { f = f * i;
     i++;
    } while (i <= n);
std::cout << "Факториал числа n = " << f << std::endl;
return 0;
}