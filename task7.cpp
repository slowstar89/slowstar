#include <iostream>

int main()
{ int n;
std::cout << "Enter n= ";
std::cin >> n;
for (int i = n; i > 0; i--)
{
    std::cout << i<< std::endl;
}
for (int i = 2; i<=n; i++)
{
    std::cout << i<< std::endl;
}
return 0;
}