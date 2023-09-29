#include <stdbool.h>

void slim_shady(){
    printf("My name is...!\nMy name is...!\nMy name is...!\n...Slim Shady!\n");
}

bool is_even(int n){
    if(n % 2 == 0) return 0;
    else return 1;
}

void print_array(int *array, int len){
    for(size_t i = 0; i < len; i++){
        printf("%i ", array[i]);
    }
    printf("\n");   
}
