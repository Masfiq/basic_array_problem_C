#include <stdio.h>

int main()
{
    int array[] = {12, 34, 434, 54, 545, 545,12,34,132,434,545,12,334,13,12};

    int array_size = sizeof(array) / sizeof(array[0]);
    
    int element = 12;
    

    for(int index = 0; index < array_size; index++){
        if (array[index] == element){
            array[index] = 0;
        }
    }

    for(int index = 0; index < array_size; index++){
        printf("%d\n", array[index]);
    }

    
}