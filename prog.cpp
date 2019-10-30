#include <iostream>
#include <string>
int main() {
    int a, b, c;
    double d;
    std::cout << "Enter a= " << std::endl;
    std::cin >> a;
    std::cout << "Enter b= " << std::endl;
    std::cin >> b;
    std::cout << "Enter c= " << std::endl;
    std::cin >> c;
    d = ((double)(a + 2*b))/(c - 10);
    std::cout << d;
    return 0;
}