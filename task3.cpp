#include <iostream>

int main()
{ int n;
std::cout << "Enter n= ";
std::cin >> n;
for (int i = 1; i <= n; i++)
{
    std::cout << i;
    if (i<n)
    {
     std::cout << ", ";   
    }
}
return 0;
}