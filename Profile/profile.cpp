#include <iostream>
#include <string>
#include "profile.h"

//Constructor
Profile::Profile(std::string user_name, int user_age, std::string user_city, std::string user_country, std::string user_pronouns)
        : name(user_name), age(user_age), city(user_city), country(user_country), pronouns(user_pronouns) {}

//Function to view the profile of a class instance
std::string Profile::view_profile() {
    //Creation a string "bio" to add all the information
    std::string bio = "Name: " + name;
    bio += "\nAge: " + std::to_string(age);
    bio += "\nLocation: " + city;
    bio += ", " + country;
    bio += "\nPronouns: " + pronouns;
    bio += "\nHobbies: \n";
    //A way to add the hobbies
    /*for (int i = 0; i < hobbies.size(); i++) {
        bio += " - " + hobbies[i] + "\n";
    }*/

    //A more elegant way
    for (std::string hobby : hobbies) {
        bio += " - " + hobby + "\n";
    }

    return bio;
}

void Profile::add_hobby(std::string new_hobby) {

    hobbies.push_back(new_hobby); //Adding hobby to the vector of hobbies

}