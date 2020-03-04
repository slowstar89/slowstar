#include <iostream>
int main() {
    long n;
    int n1 = 0, n11 = 0, n111 = 0, i = 0;
    std::cout << "Введите число " << std::endl;
    std::cin >> n;
    std::string s;
    std::string ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"},
    tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"},
    teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"},
    orders[] = {"", "thousand", "million", "billion"};
    while (n != 0) {
        n1 = n % 1000;
        
        n11 = n1 % 100;
            if (n11 >  19) {
                n111 = n11 % 10;
                n11 = n11 / 10;
            }
            else {
                n111 = n11 - 10;
            }
        n1 = n1 / 100;    
        s = orders[i] + ones[n1] + s; 
        n = n / 1000;
        i++;
    }
    return 0;
}