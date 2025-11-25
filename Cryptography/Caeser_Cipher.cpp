#include <iostream>
#include <string>

#define line std::cout<<"----------------------------------"<<std::endl;

char shiftCipher(char c, int shift) {
	char new_c;

	if (c >= 'A' && c <= 'Z') {
		new_c = (c - 'A' + shift) % 26 + 'A';
		return new_c;
	}
	else if (c >= 'a' && c <= 'z') {
		new_c = (c - 'a' + shift) % 26 + 'a';
	}
	else {
		return c;
	}
}

int main() {
	std::string text;
	std::string result = "";
	int shift;
	int choice;

	std::cout << "Caeser Encryption Algorithm" << std::endl;
	line;
	std::cout << "1. Encrypt Message" << std::endl;
	std::cout << "2. Decrypt Message" << std::endl;
	line;
	std::cout << "enter choice >> ";
	std::cin >> choice;
	line;
	if (choice == 1 || choice == 2) {
		std::cout << "Enter Text: ";
		std::cin >> text;

		std::cout << "Enter shift >> ";
		std::cin >> shift; 

		if (choice == 1) {
			// Process each character
			for (int i = 0; i < text.length(); i++) {
				result += shiftCipher(text[i], shift);
			}

			std::cout << "CipherText:";
			std::cout << result<< std::endl;
		}
		else if (choice == 2) {
			shift = -shift;
			// Process each character
			for (int i = 0; i < text.length(); i++) {
				result += shiftCipher(text[i], shift);
			}

			std::cout << "CipherText:";
			std::cout << result << std::endl;
		}

		line;
	}
	else {
		std::cout << "invalid input";
		line;
	}




	return 0;

}