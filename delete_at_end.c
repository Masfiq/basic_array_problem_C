#include <stdio.h>

int main()
{
    int array[] = {12, 34, 434, 54, 545, 545};

    int array_size = sizeof(array) / sizeof(array[0]);
    int index_to_delete = array_size - 1;

    int newArray[array_size-1];
    
    for (int index = 0; index < array_size - 1 ; index++)
    {
        newArray[index] = array[index];
    }

    for(int index = 0; index < array_size - 1; index++){
        printf("%d\n", newArray[index]);
    }




}