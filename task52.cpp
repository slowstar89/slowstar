#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
int main() {
    int teams = 0, scores = 0, sum = 0, sort_s = 0, team_n = 0;
    std::cout << "Введите количество команд " << std::endl;
    std::cin >> teams;
    std::cout << "Введите количество соревнований " << std::endl;
    std::cin >> scores;
    std::vector <std::vector<int> > competitions(teams, std::vector<int>(scores));
    std::vector<int> team_numbers(scores), sum_scores(teams);
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
    std::cout << std::endl;
    for (int i = 0; i < teams; i++) {
        team_numbers[i] = i;
    }
    for (int i = 0; i < competitions.size(); i++) {
        sum = 0;
        for (int j = 0; j < competitions[i].size(); j++) {
            sum = sum + competitions[i][j];
        }
        sum_scores[i] = sum;
    }
    bool m = true;
    while (m) {
        m = false;
        for (int i = 0; i < sum_scores.size() - 1; i++) {
            if (sum_scores[i] < sum_scores[i+1]) {
                sort_s = sum_scores[i];
                sum_scores[i] = sum_scores[i + 1];
                sum_scores[i + 1] = sort_s;
                team_n = team_numbers[i];
                team_numbers[i] = team_numbers[i + 1];
                team_numbers[i + 1] = team_n;
                m = true;
            }
        } 
    }
    for (int i = 0; i < competitions.size(); i++) {
        std::cout << "Команда №" << team_numbers[i] + 1 << ". ";
        int n = team_numbers[i];
        for (int j = 0; j < competitions[i].size(); j++) {
            if (competitions[n][j] < 10) {
                std::cout << " " << competitions[n][j] << " ";
            }
            else {
                std::cout << competitions[n][j] << " ";
            }
        }
        std::cout << "Сумма баллов:" << sum_scores[i] << std::endl;
    }
    return 0;
}