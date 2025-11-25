#include <iostream>
#include <string>

char shiftCipher(char c, int shift) {
	if (c >= 'A' && c <= 'Z') {
		char new_c = (c - 'A' + shift) % 26 + 'A';
		return new_c;
	}
	else
		return c;
}

int main() {
	std::cout << shiftCipher('A', 2);

	return 0;

}