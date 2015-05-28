#include <print.h>

void print_array(int* array , int col_size ){
    for(int col = 0 ; col < col_size ; col ++){
        printf("%2d " , *( array + col));
        if(col % 6 == 0 )
            printf("\n");
    }
}

void print_2D_array(int**  array , int col_size  , int row_size){
    for(int row = 0 ; row < row_size ; row ++){
        for(int col = 0 ; col < col_size ; col ++){
            printf("%2d " , array[row][col]);
        }
        printf("\n");
    }
}
