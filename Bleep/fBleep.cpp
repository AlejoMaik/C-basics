#include <iostream>

void bleep(std::string word, std::string &text) {

    for (int i = 0; i < text.size(); i++) {
        int match = 0;
        for (int j = 0; j < word.size(); j++) {
            if (text[i+j] == word[j]) {
                match++;
            }
        }

        if (match == word.size()) {
            for (int j = 0; j < word.size(); j++) {
                text[i+j] = '*';
            }
        }
    }

}