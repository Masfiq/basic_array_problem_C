#include <stdio.h>
#include <stdbool.h>

int main()
{
    int array[] = {12, 34, 434, 54, 545, 545, 52121, 2, 112, 2334, 4545, 342, 23};

    int array_size = sizeof(array) / sizeof(array[0]);
    int max = array[0];

    int index_max;

    for (int index = 0; index < array_size; index++)
    {
        if (array[index] > max)
        {
            max = array[index];
            index_max = index;
        }
    }

    printf("index of the maximum element in the array is %d", index_max);
}