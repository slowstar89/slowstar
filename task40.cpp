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
    std::cout << "Введите целое число ";
    std::cin >> m;
    for (int i = 0; i < a.size(); i++) {
        if (m == a[i]) {
            number = i + 1;
            break;
        }
    }
    if ( number != 0 ) {
       std::cout << "Номер введенного числа " << number <<  std::endl; 
    }
    else {
       std::cout << "Введенного числа нет" <<  std::endl;  
    }
    return 0;
}