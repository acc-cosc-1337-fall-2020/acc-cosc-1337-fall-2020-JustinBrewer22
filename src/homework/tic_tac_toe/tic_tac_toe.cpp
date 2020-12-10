//cpp
#include "tic_tac_toe.h"
#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::cin;

string player;
vector <string> pegs;

bool TicTacToe::game_over()
{
    return check_board_full();
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

string TicTacToe::get_player()const
{
    return player;
}

void TicTacToe::display_board()const
{
    for(size_t i = 0; i < pegs.size(); i += 3)
    {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
}

void TicTacToe::set_next_player()
{
    if (player == "X")
    {
        player == "O";
    }
    else
    {
        player == "X";
    }

bool TicTacToe::check_board_full()
{
    
}

}


