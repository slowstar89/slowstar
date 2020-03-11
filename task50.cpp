#include <iostream>
int main() {
    int n = 0, m = 0;
    std::cout << "Введите количество команд " << std::endl;
    std::cin >> n;
    std::cout << "Введите количество соревнований " << std::endl;
    std::cin >> m;
    int a[n][m];
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = rand() % (10 - 0 + 1) + 0;
        }
    }
    for (int i = 0; i < n; i++) {
        std::cout << "Команда №" << i + 1 << ". ";
        for (int j = 1; j < m; j++) {
            if (a[i][j] < 10) {
                std::cout << " " << a[i][j] << " ";
            }
            else {
                std::cout << a[i][j] << " ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}