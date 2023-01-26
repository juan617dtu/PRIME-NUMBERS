#include <iostream>
#include <iomanip>

char* removeSpacesFromStr(char* string) {
	
	int non_space_cnt = 0;
	
	for (int i = 0; string[i] != '\0'; ++i) {
		if (string[i] != ' ') {
			string[non_space_cnt] = string[i];
			non_space_cnt++;
		}
	}
	string[non_space_cnt] = '\0';
	return string;
}

bool isPrime(int n) {

	if (n == 1) return false;
	for (int j = 2; j < n; ++j) {
		if (n % j == 0) return false;
	}
	return true;
}

int main() {

	char limit[100]; int limit_num; bool flag;

	std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
		<< std::endl << std::endl
		<< "\t\t\t\t\t\tPRIME NUMBERS"
		<< std::endl << std::endl
		<< "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
		<< std::endl << std::endl;

	do {

		std::cout << std::endl << std::endl
			<< "Enter the limit (or enter 'q' to exit): ";
		std::cin >> limit;
		removeSpacesFromStr(limit);
		limit[0] = tolower(limit[0]);
		if (limit[0] == 'q') {
			std::cout << std::endl
				<< "Chao :^)"
				<< std::endl;
			exit(0);
		}
		limit_num = atoi(limit);
		if (limit_num < 1) {
			std::cout << "Not valid input. Try again.";
			flag = true;
		}
		else {
			flag = false;
		}
	} while (flag == true);

	std::cout << std::endl;

	for (int k = 0; k <= limit_num; ++k) {
		if (isPrime(k)) std::cout << std::left << std::setw(9) << k << ' ';
	}

	std::cout << std::endl << std::endl;

	return 0;
}
