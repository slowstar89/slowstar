#include <iostream>
int factorial (int f) {
    if (f == 0 || f == 1) {
        return 1;
    }
    return f * factorial (f - 1);
}

int main () {
    int n;
    std::cout << "Введите целое число: " << std::endl;
    std::cin >> n;
    std::cout << factorial(n) << std::endl;  
    return 0;
}