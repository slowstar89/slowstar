#include <iostream>
#include <math.h>
int main() {
    int a, b, c;
    double d;
    std::cout << "Enter a= " << std::endl;
    std::cin >> a;
    std::cout << "Enter b= " << std::endl;
    std::cin >> b;
    std::cout << "Enter c= " << std::endl;
    std::cin >> c;
    d =  (a* sqrt(a+b))/(2*(c*c));
    std::cout << "d= "<<d;
    return 0;
}