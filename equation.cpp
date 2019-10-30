#include <iostream>
#include <math.h>

int main()
{
	double a, b, c, d, x1, x2;
	std::cout << "Enter a= ";
	std::cin >> a;
	std::cout << "Enter b= ";
	std::cin >> b;
	std::cout << "Enter c= ";
	std::cin >> c;
	if (a != 0)
	{
		d = b * b - 4 * a * c;
		if (d > 0)
		{
			x1 = (-b - sqrt(d)) / (2 * a);
			x2 = (-b + sqrt(d)) / (2 * a);
			std::cout << "x1 = " << x1 << "\nx2 = " << x2 << std::endl;
		}
		else if (d == 0)
		{
			x1 = -b / (2 * a);
			std::cout << "x = " << x1;
		}
		else
		{
			std::cout << "no";
		}
	}
	else
	{
		if (b == 0)
		{
			if (c == 0)
			{
				std::cout << "x is all";
			}
			else
			{
				std::cout << "x = 0";
			}
		}
		else
		{
			x1 = -c / b;
			std::cout << "x = " << x1;
		}
	}
	return 0;
}