#include <iostream>
#include <string>
int main () {
    double a, b, c;
    std::cout << "Enter a= " << std::endl;
    std::cin >> a;
    std::cout << "Enter b= " << std::endl;
    std::cin >> b;
    std::cout << "Enter c= " << std::endl;
    std::cin >> c;
    if (c<a)
    {
        std::cout << "c<a" << std::endl;   
    }
    else if (c>b)
    {
        std::cout << "c>b" << std::endl;    
    }
    else if (c==a) {
          std::cout << "c=a" << std::endl;     
    }
    else if (c==b) {
        std::cout << "c=b" << std::endl;    
    }
    else {
        std::cout << "a<c<b" << std::endl;     
    }
    return 0;
}