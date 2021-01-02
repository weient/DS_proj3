#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "../include/algorithm.h"

using namespace std;

/******************************************************
 * In your algorithm, you can just use the the funcitons
 * listed by TA to get the board information.(functions 
 * 1. ~ 4. are listed in next block)
 * 
 * The STL library functions is not allowed to use.
******************************************************/

/*************************************************************************
 * 1. int board.get_orbs_num(int row_index, int col_index)
 * 2. int board.get_capacity(int row_index, int col_index)
 * 3. char board.get_cell_color(int row_index, int col_index)
 * 4. void board.print_current_board(int row_index, int col_index, int round)
 * 
 * 1. The function that return the number of orbs in cell(row, col)
 * 2. The function that return the orb capacity of the cell(row, col)
 * 3. The function that return the color fo the cell(row, col)
 * 4. The function that print out the current board statement
*************************************************************************/


void algorithm_A(Board board, Player player, int index[]){

    //////your algorithm design///////////
    int row = -1, col = -1;
    int color = player.get_cell_color();
    int highest_score = -20000;
    int tmp = 0;
    
    
    for(int i=0; i<5; i++)
        for(int j=0; j<6; j++){
            if(board.get_cell_color(i, j) == color || board.get_cell_color(i, j) == 'w'){
                
                if(board.get_capacity(i, j) == 3)
                    tmp += 10;
                if(board.get_capacity(i, j) == 5)
                    tmp += 5;
                if(board.get_orbs_num(i, j) == (board.get_capacity(i, j)-1))
                    tmp += 5;
                if(tmp > highest_score){
                    highest_score = tmp;
                    row = i;
                    col = j;
                }
            }
        }
    
    if(row != -1 && col != -1){
        index[0] = row;
        index[1] = col;
    }else cout << "invalid move!!" << endl;
    
    
}
