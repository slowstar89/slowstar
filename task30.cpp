#include <iostream>
int fibonachchi (int n) {
    int a1 = 0, a2 = 1;
    for ( int i = 1; i < n; i++) {
    a2 = a2 + a1;
    a1 = a2 - a1;
    }
    return a2;
}
int main () {
int f, c;
    std::cout << "Введите целое число: " << std::endl;
    std::cin >> f;
    c = fibonachchi(f);
    std::cout << c << std::endl;  
    return 0;
}