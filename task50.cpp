#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
int main() {
    int teams = 0, scores = 0, sum = 0, max = 0, max_sum = 0;
    std::cout << "Введите количество команд " << std::endl;
    std::cin >> teams;
    std::cout << "Введите количество соревнований " << std::endl;
    std::cin >> scores;
    std::vector <std::vector<int> > competitions(teams, std::vector<int>(scores));
    srand(time(NULL));
    for (int i = 0; i < teams; i++) {
        for (int j = 0; j < scores; j++) {
            competitions[i][j] = rand() % (10 - 0 + 1) + 0;
        }
    }
    for (int i = 0; i < competitions.size(); i++) {
        std::cout << "Команда №" << i + 1 << ". ";
        for (int j = 0; j < competitions[i].size(); j++) {
            if (competitions[i][j] < 10) {
                std::cout << " " << competitions[i][j] << " ";
            }
            else {
                std::cout << competitions[i][j] << " ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}