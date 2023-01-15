#include <iostream>
#include <vector>
#include "functions.hpp"

int main() {

    //vector where we can upload the position on the board
    std::vector<char> board = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    int turn = 0; //counter to check whose turn is (X or O)
    char won; //char 'X' means X won and 'O' means O won
    std::string position; //It is the input for the position the user decides

    std::cout<<"\nLet's play Tic - Tac - Toe!\n\n";
    new_board(); //Function to draw the initial board where the user can see the valid notation to enter

    std::cout<<"X's starts, input the positions:";
    std::cin>>position;
    board = pos(board, position, 'X'); //Function that return a new vector with a char in the position the user entered
    draw(board); //Function to draw the current board
    while (!is_over(board)) { //while there are not 3 char in a row or the board empty
        if (turn % 2 == 0) { //even is for the O
            std::cout<<"It's the turn of the O's:";
            std::cin>>position;

            board = pos(board, position, 'O'); //Function that return a new vector with a O in the position the user entered
            draw(board);
            won = 'O'; //If this is the last move, either O won or it is a tie

        } else {
            std::cout<<"It's the turn of the X's:";
            std::cin>>position;

            board = pos(board, position, 'X');  //Function that return a new vector with an X in the position the user entered
            draw(board);
            won = 'X'; //If this is the last move, either X won or it is a tie

        }

        turn++; //It increases by 1 to changes turn
        if (filled_up(turn) && !is_over(board)) { //If the board is filled_up, and there is not a winner, then the game is over
            std::cout<<"😱 It is a tie! The game is over\n";
            return 0;
        }

    }

    end_game(won); //Function to print the winner

    return 0; //End of the program
}
