#include <iostream>
#include <vector>
#include <time.h>

int main () {
    int n;
    bool m = false;
    std::cout << "Введите количество предметов ";
    std::cin >> n;
    std::vector<int> a(n);
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % (5 - 1 + 1) +1;
        std::cout << i + 1<< ". " << a[i] << std::endl;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < 3) {
            m = true;
            break;
        }
    }
    if (m == true) {
    std::cout << "Ученик двоечник" << std::endl;
    }
    m = false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == 5) {
            m = true;
        }
    }
    if (m == true) {
        std::cout << "Ученик " << std::endl;
    }

    return 0;
}