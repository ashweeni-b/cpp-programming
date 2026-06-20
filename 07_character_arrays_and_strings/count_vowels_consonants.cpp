/*
Problem: Count vowels and consonants
Concept: Strings
Approach: Count vowels by iterating and
consonants by length of string - vowels count
*/

#include <iostream>

int main() {
    std::string str;

    std::cout << "Enter the string: ";
    std::getline(std::cin, str);

    std::cout << "String: " << str << std::endl;

    int vowel_count = 0;
    int index = 0;

    for(char ch : str) {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowel_count++;
        }
    }

    int consonant_count = str.length() - vowel_count;

    std::cout << "Vowels: " << vowel_count << std::endl;
    std::cout << "Consonants: " << consonant_count << std::endl;

    return 0;
}