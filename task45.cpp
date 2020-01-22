#include <iostream>
#include <vector>
#include <time.h>

int main () {
    int n, b = 0;
    std::cout << "Введите количество элементов массива ";
    std::cin >> n;
    std::vector<int> a(n);
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % (100 - 1 + 1) + 1;
        std::cout << i + 1<< ". " << a[i] << std::endl;
    }
    for (int i = 0; i < a.size(); i++) {
        int j = a.size() - 1;
        while ( (a[j - 1] > a[j]) && (j>0) ) {
        b = a[j - 1];
        a[j - 1] = a[j];
        a[j] = b;    
        j--;
        }
    }
    
    for (int i = 0; i < n; i++) {
        std::cout << i + 1<< ". " << a[i] << std::endl;
    }
    return 0;
}