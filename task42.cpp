#include <iostream>
#include <vector>
#include <time.h>

int main () {
    int n;
    bool otl = true, dv = false;
    std::cout << "Введите количество предметов ";
    std::cin >> n;
    std::vector<int> a(n);
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % (5 - 2 + 1) + 2;
        std::cout << i + 1<< ". " << a[i] << std::endl;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < 3) {
            dv = true;
            break;
        }
        if (a[i] != 5) {
            otl = false;
        }
    }
    if (otl) {
        std::cout << "Ученик отличник " << std::endl;
    }
    if (dv) {
       std::cout << "Ученик двоечник " << std::endl; 
    }
    if (otl == false && dv == false) {
        std::cout << "Это нормальный ученик " << std::endl;
    }
    return 0;
}