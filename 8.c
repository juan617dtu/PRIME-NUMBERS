#include <stdio.h>
#include <stdbool.h>

// Funtion removing spaces from string
char* removeSpacesFromStr(char* string)
{
	// non_space_count to keep the frequency of non space characters
	int non_space_count = 0;

	//Traverse a string and if it is non space character then, place it at index non_space_count
	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i] != ' ')
		{
			string[non_space_count] = string[i];
			non_space_count++;//non_space_count incremented
		}
	}

	//Finally placing final character at the string end
	string[non_space_count] = '\0';
	return string;
}
bool isPrime(int n) {
	if (n == 1) return false;
	for (int k = 2; k < n; k++) {
		if (n % k == 0) return false;
	}
	return true;
}
int main() {

	char limit[100];
	bool flag;
	int var_limit, non_space_cnt = 0;

	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
	printf("\t\t\t\t\t\tPRIME NUMBERS\n\n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
	
	do {
		printf("\n\nEnter the limit (or enter 'q' to exit): ");
		fgets(limit, 100, stdin);
		removeSpacesFromStr(limit);
		if (limit[0] == 'q' || limit[0] == 'Q') {
			printf("\nChao :^)\n");
			exit(0);
		}
		var_limit = atoi(limit);
		if (var_limit < 1) {
			printf("Not valid input. Try again.");
			flag = true;
		}
		else {
			flag = false;
		}
	} while (flag == true);

	printf("\n");

	for (int j = 1; j <= var_limit; j++) {
		if (isPrime(j)) printf("%-9d ", j);
	}
	printf("\n\n");

	return 0;
}
