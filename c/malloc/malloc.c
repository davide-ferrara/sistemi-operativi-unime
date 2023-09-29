#include <stdio.h>
#include <stdlib.h>
#include "../libs/my_func.h"


int main(){
    int n = 5;
    int *array = malloc(n*sizeof(int)); // Allocazione di memoria
    printf("Indirizzo array: %p, dim: %lu btyes\n", array, n*sizeof(array));
    for(size_t i = 0; i < n; i++){
        //scanf("%i", &array[i]);
        array[i] = 0;
    }    

    print_array(array, n);
    free(array);
    printf("Array dopo free:\n");
    print_array(array, n);
    
    return 0;
}