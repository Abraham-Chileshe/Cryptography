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
		return new_c;
	}
	else {
		return c;
	}
}

std::string textsplit(std::string s, int shift) {
	std::string result = "";

	for (int i = 0; i < s.length(); i++) {
		result += shiftCipher(s[i], shift);
	}

	return result;
}

int main() {
	std::string text;
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
		std::cin.ignore();
		std::getline(std::cin, text);

		std::cout << "Enter shift >> ";
		std::cin >> shift; 
		line;

		if (choice == 1) 
			shift = -shift;
			
		shift = ((shift % 26) + 26) % 26;

		std::cout << "CipherText:";
		std::cout << textsplit(text, shift) << std::endl;
		
		line;
	}
	else {
		std::cout << "invalid input";
		line;
	}

	return 0;

}