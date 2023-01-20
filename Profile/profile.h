#include <vector>
#include <string>

#ifndef BEGGINING_PROFILE_H
#define BEGGINING_PROFILE_H

class Profile { //Creating a profile class

private: //Creating the private member of the class
    std::string name; //Name of the instance
    int age; //Age of the instance
    std::string city; //City where the instance lives
    std::string country; //Country where the instance lives
    std::string pronouns; //Pronouns of the instance
    std::vector<std::string> hobbies; //Vector with the instance's hobbies

public: //Creating the public member of the class
    //Constructor of the class
    Profile(std::string name, int age, std::string city, std::string country, std::string pronouns = "they/them");

    std::string view_profile(); //Function to view the profile of a class instance
    void add_hobby(std::string new_hobby); //Function to add a hobby to the profile of a class instance

};

#endif //BEGGINING_PROFILE_H
