#include <iostream>
int main () {
    int m, n, i = 1, j = 1, k = 1, fn = 1, fm = 1, f1 = 1;
    std::cout << "Введите целое число n: " << std::endl;
    std::cin >> n;
    std::cout << "Введите целое число m: " << std::endl;
    std::cin >> m;
    if (n > m) {
        do { fn = fn * i;
             i++;
            } while (i <= n);
        do { fm = fm * j;
             j++;
            } while (j <= m);
        do { f1 = f1 * k;
             k++;
            } while (k <= (n - m));
        m = fn / (fm * f1);
        std::cout << m << std::endl;
    }
    else {
        std::cout << "m < n " << std::endl;    
    }
    return 0;
}