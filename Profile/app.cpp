#include <iostream>
#include "profile.h"

int main() {
    //Creating a instance of "Profile" called "sam"
    Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
    //Adding hobbies to the profile "sam"
    sam.add_hobby("listening to audiobooks and podcasts");
    sam.add_hobby("playing rec sports like bowling and kickball");
    sam.add_hobby("writing a speculative fiction novel");
    sam.add_hobby("reading advice columns");

    //Printing the profile of "sam"
    std::cout<<sam.view_profile()<<std::endl;

}