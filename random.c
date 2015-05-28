#include <random.h>


int ** generate_random_2D_array(int** array , int col_size, int row_size){
    for(int row = 0 ; row < row_size ; row ++){
        for(int col = 0 ; col < col_size ; col ++){
            array[row][col]  = rand() % 24 ;
        } // end inter for
    } // end outer for
    return array;
}
