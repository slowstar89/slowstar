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
    std::cout << "Введите число, которое будем искать ";
    std::cin >> b;
    end = a.size() - 1;
    if ((b < a[begin]) || (b > a[end])) {
        std::cout << "Такого числа нет в массиве ";    
    }
    do { 
        m = (end - begin) / 2;
        if (a[m] > b) {
            end = m;
        }
        if (a[m] < b) {
            begin = m;
        }
    } while (a[m] != b);
    if (a[m] == b) {
        std::cout << "Номер введенного числа = " << m + 1;    
        }
    return 0;
}
