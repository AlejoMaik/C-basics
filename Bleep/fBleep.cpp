#include <iostream>

void bleep(std::string word, std::string &text) {

    for (int i = 0; i < text.size(); i++) {
        int match = 0; //number of letter equal to the word
        for (int j = 0; j < word.size(); j++) { //Nested loop to see if there is a match
            if (text[i+j] == word[j]) {
                match++; //number of letter equal to the word
            }
        }

        if (match == word.size()) { //If all the letters match, then...
            for (int j = 0; j < word.size(); j++) { //Let's bleep those letter
                text[i+j] = '*'; //We change the word for *
            }
        }
    }

}