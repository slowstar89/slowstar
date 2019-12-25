#include <iostream>
#include <vector>
#include <time.h>

int main () {
    int n, m, number = 0;
    std::cout << "Введите количество элементов массива ";
    std::cin >> n;
    std::vector<int> a(n);
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % (10 - -5 + 1) - 5;
        std::cout << i + 1<< ". " << a[i] << std::endl;
    }
    for (int i = 1; i < a.size(); i++) {
        if (a[i] > a[number]) {
            number = i;
        }
    }
    std::cout << "Максимальный элемент массива " << std::endl << number + 1 << ". " << a[number] << std::endl; 
    return 0;
}