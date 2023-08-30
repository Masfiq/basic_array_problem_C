#include <stdio.h>
#include <stdbool.h>

int main()
{
    int array[] = {12, 34, 434, 54, 545, 545, 52121, 2, 112, 2334, 4545, 342, 23, 57, 3555, 233, 34, 54, 312, 32, 54, 54};

    int element = 1000;
    int target_index = 13;

    array[target_index] = element;

    printf("%d", array[target_index]);
}