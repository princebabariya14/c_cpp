#include <iostream>

bool isVowel(char letter);

int main() {
    char letter;

    std::cout << "Enter a letter: ";
    std::cin >> letter;

    if (isVowel(tolower(letter))) {
        std::cout << letter << " is a vowel." << std::endl;
    } else {
        std::cout << letter << " is a consonant." << std::endl;
    }

    return 0;
}

bool isVowel(char letter) {
    switch (letter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}

