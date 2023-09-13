#include <stdio.h>

int main()
{
    int array1[] = {12, 34, 434, 54, 545, 545};
    int array2[] = {52121, 2, 112, 2334, 4545, 342, 23};

    int array1_size = sizeof(array1) / sizeof(array1[0]);
    int array2_size = sizeof(array2) / sizeof(array2[0]);

    int array3[array1_size+array2_size];
    int array3_index = 0;
    
    for (int index = 0; index < array1_size ; index++)
    {
        array3[array3_index] = array1[index];
        array3_index++;        
    }

    for(int index = 0; index < array2_size; index++){
        array3[array3_index] = array2[index];
        array3_index++;
    }

    for(int index = 0; index < array1_size+array2_size; index++){
        printf("%d\n", array3[index]);
    }
}