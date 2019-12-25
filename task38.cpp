#include <iostream>
#include <vector>

int main () {
    int sum = 0, n = 0, m;
    std::cout << "Введите количество элементов массива ";
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < a.size(); i++) {
        std::cout << "Введите значение элемента массива ";
        std::cin >> a[i];
    }
    for (int i = 0; i < a.size(); i++) {
        std::cout << i + 1<< ". " << a[i] << std::endl;
    }
    for (int i = 0; i < a.size(); i++) {
        sum = sum + a[i];
    }
    std::cout << "Сумма элементов массива равна " << sum << std::endl;
    return 0;
}