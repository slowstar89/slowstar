#include <iostream>

int main()
{ int n;
std::cout << "Enter n= ";
std::cin >> n;
for (int i = 0; i < n; i++)
{
    std::cout << i + 1;
    if (i < (n - 1))
    {
     std::cout << ", ";   
    }
}
return 0;
}