#include <iostream>
#include <string>
int main()
{	std::string la_frasa;
	std::cout << "Enter a string " << std::endl;
	std::getline(std::cin, la_frasa);
	int i = 0, j = la_frasa.size() - 1;
	bool pal = true;
	while (i < j) {
		while (la_frasa[i] == ' ') {
			i++;
		}
		while (la_frasa[j] == ' ') {
			j--;
		}	
		if (la_frasa[i] != la_frasa[j]) {
				pal = false;
				break;
		}
		j--;
		i++;
		}
	if (!pal) {
		std::cout << "This is not palindrom " << std::endl;
	}
	else {
		std::cout << "This is palindrom " << std::endl;
	}
	return 0;
}
    
