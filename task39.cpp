#include <iostream>
#include <vector>

int main () {
    int n;
    std::cout << "Введите число ";
    std::cin >> n;
    std::vector<int> a;
    
    while (n != 0) {
        a.push_back(n % 2);
        n = n / 2;
        
    }
    for (int i = a.size()-1; i >= 0; i--) {
        std::cout << a[i];
    }
    return 0;
}