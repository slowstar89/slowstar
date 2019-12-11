#include <iostream>
int fib (int n) {
    if ( n==1 || n==2 ) {
        return 1;
    }
    return fib(n - 1) + fib (n - 2);
}

int main () {
    int f;
    std::cout << "Введите целое число: " << std::endl;
    std::cin >> f;
    std::cout << fib(f) << std::endl;  
    return 0;
}