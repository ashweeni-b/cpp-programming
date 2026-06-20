/*
Problem: Demonstration of string library functions
Concept: Strings
*/

#include <iostream>

int main() {
    std::string name = "Jacob";
    std::string surname = "Paul";

    std::cout << "Strings are: " << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Surname: " << surname << std::endl << std::endl;

    //String length
    std::cout << "Length of " << name << " is " << name.length() << std::endl;
    std::cout << "Length of " << surname << " is " << surname.length() << std::endl << std::endl;

    //String append
    name.append(surname);

    std::cout << "Strings after concatenation are: " << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Surname: " << surname << std::endl << std::endl;

    //String Insert
    name.insert(0, surname);

    std::cout << "Strings after insertion are: " << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Surname: " << surname << std::endl << std::endl;

    //String Substring
    std::cout << "Substring: " << name.substr(0, 4) << std::endl << std::endl;

    //String Comparison
    std::string fruit = "Apple";
    std::string grain = "Wheat";

    std::cout << "Comparison: " << fruit.compare(grain) << std::endl << std::endl;

    // String Find
    std::string sentence = "This is a learning playground for C++";
    std::string word = "C++";
    std::string new_word = "programming";

    std::cout << "Sentence: " << sentence << std::endl;

    size_t position1 = sentence.find(word);
    size_t position2 = sentence.find(new_word);

    if(position1 == std::string::npos) {
        std::cout << word << " not found" << std::endl;
    } else {
        std::cout << word << " found at position " << position1 << std::endl;
    }

    if(position2 == std::string::npos) {
        std::cout << new_word << " not found" << std::endl;
    } else {
        std::cout << new_word << " found at position " << position2 << std::endl;
    }

    return 0;
}