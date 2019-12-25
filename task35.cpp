#include <iostream>
void print (int m) {
    if (m == 0) return;
    int a;
    a = m % 10;
    m = m / 10;
    std::cout << a;
    print(m);
}

int main () {
int n;
std::cout << "Введите целое число: " << std::endl;
std::cin >> n;
print(n);
return 0;
}