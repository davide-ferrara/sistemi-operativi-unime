#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../libs/my_func.h"

struct person{
    char *name, *surname;
    unsigned short age;
    unsigned short height;
};

int main(){
    struct person p1 = {
        .name = "Davide", 
        .age = 25, 
        .height = 174,
        };

    printf("%s, %d, %d\n", p1.name, p1.age, p1.height);

}