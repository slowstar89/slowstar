#include <iostream>

int main () {
    int a[5], sum = 0;
    for (int i = 0; i < 5; i++) {
        std::cout << "Введите значение элемента массива ";
        std::cin >> a[i];
    }
    for (int i = 0; i < 5; i++) {
        std::cout << i + 1 << ". " << a[i] << std::endl;
    }
    for (int i = 0; i < 5; i++) {
        sum = sum + a[i];
    }
    std::cout << "Сумма элементов массива равна " << sum << std::endl;
    return 0;
}