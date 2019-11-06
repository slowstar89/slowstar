#include <iostream>

int main()
{ int n;
std::cout << "Enter n= ";
std::cin >> n;
for (int i = 0; i < n; i++)
{
    std::cout << i + 1 << " ";
}
return 0;
}