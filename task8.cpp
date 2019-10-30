#include <iostream>

int main()
{ int n;
std::cout << "Enter n= ";
std::cin >> n;
for (int m = 1; m <= n; m++)
{
for (int i = 1; i <= n; i++)
{
    std::cout << "*";
}
std::cout << std::endl;
}
return 0;
}