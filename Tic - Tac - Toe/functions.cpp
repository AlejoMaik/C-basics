#include <iostream>
#include <vector>

void draw(std::vector<char> board) { //print the board

    std::cout << "     |     |      \n";

    std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "\n";

    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";

    std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "\n";

    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";

    std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "\n";
    std::cout << "     |     |      \n\n";

}

void new_board() { //print the initial board with the valid notation

    std::cout << "      |      |      \n";

    std::cout << "  " << "LU" << "  |  " << "MU" << "  |  " << "RU" << "\n";

    std::cout << "______|______|______ \n";
    std::cout << "      |      |       \n";

    std::cout << "  " << "LM" << "  |  " << "MM" << "  |  " << "RM" << "\n";

    std::cout << "______|______|______ \n";
    std::cout << "      |      |       \n";

    std::cout << "  " << "LD" << "  |  " << "MD" << "  |  " << "RD" << "\n";
    std::cout << "      |      |       \n\n";

}

bool is_over(std::vector<char> board) { //Check is there is a win position
    if (board[0] == board[1] && board[0] == board[2] && board[0] != ' ') {
        return true;
    } else if (board[3] == board[4] && board[3] == board[5] && board[3] != ' ') {
        return true;
    } else if (board[6] == board[7] && board[6] == board[8] && board[6] != ' ') {
        return true;
    } else if (board[0] == board[3] && board[0] == board[6] && board[0] != ' ') {
        return true;
    } else if (board[1] == board[4] && board[1] == board[7] && board[1] != ' ') {
        return true;
    } else if (board[2] == board[5] && board[2] == board[8] && board[2] != ' ') {
        return true;
    } else if (board[0] == board[4] && board[0] == board[8] && board[0] != ' ') {
        return true;
    } else if (board[2] == board[4] && board[2] == board[6] && board[2] != ' ') {
        return true;
    } else {
        return false;
    }

}

std::vector<char> pos(std::vector<char> board, std::string position, char letter) {
    if (position == "LU") {
        board[0] = letter;
    } else if (position == "MU") {
        board[1] = letter;
    } else if (position == "RU") {
        board[2] = letter;
    } else if (position == "LM") {
        board[3] = letter;
    } else if (position == "MM") {
        board[4] = letter;
    } else if (position == "RM") {
        board[5] = letter;
    } else if (position == "LD") {
        board[6] = letter;
    } else if (position == "MD") {
        board[7] = letter;
    } else if (position == "RD") {
        board[8] = letter;
    } else { //If the user enter an invalid position
        std::cout<<"That is not a valid position, enter a valid one:";
        std::cin>>position;
        board = pos(board, position, letter); //Recursive call until a valid position is entered
    }

    return board; //return the new board
}

void end_game(char won) { //Function to print the winner
    if (won == 'X') {
        std::cout<<"The game is over, X's won!!! :D\n";
    } else {
        std::cout<<"The game is over, O's won!!! :D\n";
    }
}

bool filled_up(int turn) { //Function to check if the board is filled up
    if (turn >= 8) { //Filled up, so it is a
        return true;
    }
    return false; //Not filled up

}