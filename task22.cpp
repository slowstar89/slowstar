#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {
srand(time(NULL));
int x = rand() % (100 - 1 + 1) +1, y = 0, i = 0;

while (x!=y) {
    std::cout << "Введите загаданное число: " << std::endl;
    std::cin >> y;
    if (x > y) {
    std::cout << "Загаданное число больше" << std::endl;    
    }
    if (x < y) {
    std::cout << "Загаданное число меньше" << std::endl;    
    }
    i = i + 1;
    } 
    std::cout << "Количество попыток " << i << std::endl;
return 0;
}
