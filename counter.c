#include <counter.h>

void counter(int **array , int col_size  , int row_size , int* counter_array){

    // initial array first
    //memset(array , 0 , col_size * sizeof(*array));
    for(int index = 0 ; index < col_size ; index ++)
        *(counter_array + index) = 0 ;

    for(int col = 0 ; col < col_size ; col ++){
        for(int row = 0 ; row < row_size ; row ++){
            if( *(*(array + row )+col) != 0 &&
                *(*(array + row )+col) != 17 &&
                *(*(array + row )+col) != 19 &&
                *(*(array + row )+col) != 23 ){
                    *(counter_array +col ) +=1 ;
            }  // end if
        }// end inner for
    } // end outer for
}

