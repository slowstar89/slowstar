#include <iostream>
int factorial (int x) {
    int f = 1;
    for (int i = 1; i <= x; i++) {
        f*=i;
    }
    return f;
}
int main () {
    int m, n, f;
    do {
    std::cout << "Введите целое число n: " << std::endl;
    std::cin >> n;
    std::cout << "Введите целое число m: " << std::endl;
    std::cin >> m;
    } while (n < m);
    f = factorial (n) / (factorial (m) * factorial (n - m));
    std::cout << f << std::endl;
    return 0;
}