#include <iostream>
#include <string>
int main () {
    double x1, y1, w, h, x2, y2;
    std::cout << "Enter x1= " << std::endl;
    std::cin >> x1;
    std::cout << "Enter y1= " << std::endl;
    std::cin >> y1;
    std::cout << "Enter w= " << std::endl;
    std::cin >> w;
    std::cout << "Enter h= " << std::endl;
    std::cin >> h;
    std::cout << "Enter x2= " << std::endl;
    std::cin >> x2;
    std::cout << "Enter y2= " << std::endl;
    std::cin >> y2;
    if ((x2>x1)&&(x2<(x1+w)))
    else if (y1==y2)
    {
    std::cout << "";
    }
    else if (y2<y1)&&(y2>(y1-h)) 
    {
    std::cout << "";
    }

    
    