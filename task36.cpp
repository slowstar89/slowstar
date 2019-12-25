#include <iostream>
void print (int m) {
    if (m == 0) return;

    int a = (m % 10 + 1) % 10;
    m = m / 10;
    print(m);
    std::cout << a;
    
}

int main () {
int n;
std::cout << "Введите целое число: " << std::endl;
std::cin >> n;
print(n);
return 0;
}