#include <iostream>
#include <vector>
#include <time.h>

int main () {
    int n, b = 0;
    bool m = true;
    std::cout << "Введите количество элементов массива ";
    std::cin >> n;
    std::vector<int> a(n);
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % (100 - 1 + 1) + 1;
        std::cout << i + 1<< ". " << a[i] << std::endl;
    }
    while (m) {
        
        for (int i = 0; i < a.size(); i++) {
            m = false;
            if (a[i] > a[i+1]) {
                b = a[i];
                a [i] = a [i+1];
                a [i+1] = b;
               
            }
        } m = true;
    }
    for (int i = 0; i < n; i++) {
        std::cout << i + 1<< ". " << a[i] << std::endl;
    }
    return 0;
}