//h
#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

#ifndef Tic_Tac_Toe_H
#define Tic_Tac_Toe_H
class TicTacToe
{
    private:
        string player;
        vector <string> pegs = {9," "};
    public:
        bool game_over();
        void start_game(string first_player);
        void mark_board(int position);
        string get_player()const;
        void display_board()const;
    
    private:
        void set_next_player();
        bool check_board_full();
        void clear_board();
};

#endif