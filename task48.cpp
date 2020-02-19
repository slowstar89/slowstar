#include <iostream>
#include <string>
int main()
{	std::string la_frasa;
	std::cout << "Enter a string " << std::endl;
	std::getline(std::cin, la_frasa);
	int i = 0, j = la_frasa.size() - 1;
	bool pal = true;
	while (i < la_frasa.size() - 1) {
		if (la_frasa[i] != ' ') {
			if (la_frasa[j] != ' ') {
				if (la_frasa[i] == la_frasa[j]) {
					pal = true;
					i++;
					j--;
				}
				else {
					pal = false;
					
					break;
				}
			}
			else {
				j--;
			}
		}
		else {
			i++;
		}
	}
	if (pal == false) {
		std::cout << "This is not palindrom " << std::endl;
	}
	else {
		std::cout << "This is palindrom " << std::endl;
	}
	return 0;
}
    
