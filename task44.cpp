#include <iostream>
#include <vector>
#include <time.h>

int main () {
    int n, b = 0, min = 0;
    std::cout << "Введите количество элементов массива ";
    std::cin >> n;
    std::vector<int> a(n);
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % (100 - 1 + 1) + 1;
        std::cout << i + 1<< ". " << a[i] << std::endl;
    }
    for (int i = 0; i < a.size()-1; i++) {
        for (int j = 1; j < a.size(); j++) {
            if (a[min] > a[j]) {
            min = j;
            }
        }
        b = a[min];
        a[min] = a[i];
        a[i] = b;
    }
    for (int i = 0; i < n; i++) {
        std::cout << i + 1<< ". " << a[i] << std::endl;
    }
    return 0;
}