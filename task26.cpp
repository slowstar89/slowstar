#include <iostream>
int main () {
int n, a1 = 0, a2 = 1;
std::cout << "Введите целое число: " << std::endl;
std::cin >> n;
for ( int i = 1; i < n; i++) {
    a2 = a2 + a1;
    a1 = a2 - a1;
    }
    std::cout << a2 << std::endl;  
    return 0;
}