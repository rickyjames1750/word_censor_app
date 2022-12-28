#include <iostream> 
#include <string>

#include "functions.hpp"

int main() {
    std::string word = "meat";

    std::string sentence = "I sometimes eat meat. meat is amazing. meat is healthy. meat is better.";

    bleep(word, sentence);


    for (int i = 0; i < sentence.size(); i++) {
        std::cout << sentence[i];
    }

    std::cout << "\n";
}