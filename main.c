#include <stdio.h>

//for malloc and calloc
#include <stdlib.h>

#include "print.h"
#include "random.h"
#include "counter.h"

#define PERSON 5
#define DAY 15
int create_array(){
    int* values = calloc( DAY * PERSON  , sizeof(int));
    int** rows = malloc(PERSON * sizeof(int)) ;

    for(int index = 0 ; index< PERSON ; index++){
        rows[index] = values + index * DAY ;
    }
    return rows;
}
//int initial(int *array , int size){
//    memset(array , 0 , size * sizeof(*array));
//}


int main(void)
{
    int counter_array[DAY] ;
    int **array = create_array();
    printf("Random 2D array : \n");
    generate_random_2D_array(array ,  DAY , PERSON);
    print_2D_array(array, DAY  , PERSON );

    printf("\ncount : \n");
    counter(array , DAY , PERSON , counter_array );
    print_array(counter_array,DAY);

    return 0;
}



