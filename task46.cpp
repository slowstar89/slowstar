#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>

int main () {
    int n, b, begin = 0, end = 0, m = 0;
    std::cout << "Введите количество элементов массива ";
    std::cin >> n;
    std::vector<int> a(n);
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % (100 - 1 + 1) + 1;
    }
    std::sort(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++) {
        std::cout << i + 1<< ". " << a[i] << std::endl;
    }
    std::cout << "Введите число, которое будем искать " << std::endl;
    std::cin >> b;
    end = a.size() - 1;
    while (end >= begin) {
        m = (begin + end) / 2;
        if (a[m] == b) {
            std::cout << "Номер введенного числа = " << m + 1 << std::endl;    
            break;
        }
        if (b > a[m]) {
            begin = m + 1;
        }
        else if (b < a[m]) {
            end = m - 1;
        }
    }
    if (end < begin) {
        std::cout << "Такого числа нет" << std::endl;
    }    
    return 0;
}
