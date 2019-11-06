#include <iostream>

int main()
{
    int n;
    std::cout << "Enter n= ";
    std::cin >> n;
    for (int m = 0; m < n; m++)
    {
        for (int i = m; i < n; i++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for (int i = (n-1); i > 0; i--)
    {
        for (int j = i; j<=n; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}