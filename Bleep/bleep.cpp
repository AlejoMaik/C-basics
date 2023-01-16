#include <iostream>
#include <string>

#include "fBleep.h" //Including the header file

int main() {
    //This is the word we want to ban
    std::string word = "broccoli";
    //Text from where we'll ban the word
    std::string text = "I sometimes eat broccoli. There are three interesting things about broccoli. Number One. "
                       "Nobody knows how to spell it. Number Two. No matter how long you boil it,"
                       " it's always cold by the time it reaches your plate. Number Three. It's green. #broccoli";

    bleep(word, text); //Calling the function bleep with word and text as arguments
    std::cout<<text; //Printing the text with the word already banned

}