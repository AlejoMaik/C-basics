#include <vector>

#ifndef BEGGINING_FUNCTIONS_H
#define BEGGINING_FUNCTIONS_H

//Function to draw the current board
void draw(std::vector<char> board);

//Function to draw the initial board where the user can see the valid notation to enter
void new_board();

//Function to determine if the game is done
bool is_over(std::vector<char> board);

//Function that return a new vector with a char in the position the user entered
std::vector<char> pos(std::vector<char> board, std::string position, char letter);

//Function to print the winner
void end_game(char won);

//Function to check if the board is filled up
bool filled_up(int turn);

#endif //BEGGINING_FUNCTIONS_H
