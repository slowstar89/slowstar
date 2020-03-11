#include <iostream>
int main() {
    long n;
    bool minus = false;
    int n1 = 0, n11 = 0, n111 = 0, i = 0;
    std::cout << "Введите число " << std::endl;
    std::cin >> n;
    std::string s, s1;
    std::string ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"},
    tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"},
    teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"},
    orders[] = {"", "thousand", "million", "billion"};
    if (n == 0) {
        std::cout << "zero";
    }
    if (n < 0) {
        minus = true;
        n = -n;
    }
    while (n != 0) {
        n1 = n % 1000;
        n11 = n1 % 100;
        if (n11 > 19 || n11 < 10) {
            n111 = n11 % 10;
            n11 = n11 / 10;
            s1 = ones[n111];
            if (n11 != 0) {
                if (n111 != 0) {
                    s1 = tens[n11] + ' ' + s1;
                    }
                else {
                    s1 = tens[n11];
                    }
            }
        }
        else {
            n111 = n11 % 10;
            s1 = teens[n111]; 
        }
        n1 = n1 / 100;
        if  (n1 != 0) {
        s1 = ones[n1] + " hundred " + s1;
        }
        n = n / 1000;
        if (i > 0 && s1 != "") {
            s = s1 + ' ' + orders[i] + ' ' + s;
        }
        else {
            s = s + s1;
        }
        i++;
    }
    if (minus) {
        s = "minus " + s;
    }
    std::cout << s << std::endl;
    return 0;
}