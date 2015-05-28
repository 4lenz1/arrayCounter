#include <counter.h>

int * counter(int **array , int col_size  , int row_size){
    int counter_array[col_size];
    for(int index= 0 ; index< col_size ; index++)
        counter_array[index] = 0 ;

    for(int col = 0 ; col < col_size ; col ++){
        for(int row = 0 ; row < row_size ; row ++){
            if( *(*(array + row )+col) != 0){
                *(counter_array +col ) +=1 ;

            }

        }
        printf("[%d] : %d \n",col , counter_array[col]);
    }
    return counter_array;
}

