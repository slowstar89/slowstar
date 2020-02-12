#include <iostream>
#include <string>
int main () {
    char a;
    bool found = false;
    std::string abc;
    std::cout << "Введите строку" << std::endl;
    std::getline(std::cin, abc);
    std::cout << "Введите символ для поиска" << std::endl;
    std::cin >> a;
    for (int i = 0; i < abc.size(); i++) {
        if (abc[i] == a) {
            found = true;
            std::cout << "Порядковый номер символа " << i + 1 << std::endl;
            break;
        }
    }
    if (!found) {
        std::cout << "Такого символа нет" << std::endl;
    }  
    return 0;
}