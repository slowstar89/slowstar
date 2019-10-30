#include <iostream>

int main()
{
	double x1, y1, height, width, x2, y2;
	std::cout << "Enter x1= " << std::endl;
	std::cin >> x1;
	std::cout << "Enter y1= " << std::endl;
	std::cin >> y1;
	std::cout << "Enter height= " << std::endl;
	std::cin >> height;
	std::cout << "Enter width= " << std::endl;
	std::cin >> width;
	std::cout << "Enter x2= " << std::endl;
	std::cin >> x2;
	std::cout << "Enter y2= " << std::endl;
	std::cin >> y2;
	if (x2<x1 || x2>(x1+width) || y2>y1 || y2<(y1-height))
	{
		std::cout << "(x2,y2) is not in rectangle" << std::endl;
	}
	else if (x2>x1 && x2<(x1+width) && y2<y1 && y2>(y1-height))
	{
		std::cout << "(x2,y2) is in rectangle" << std::endl;
	}
    else
    {
       std::cout << "(x2,y2) is in a border" << std::endl;
    }
    
	return 0;
}