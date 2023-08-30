#include <stdio.h>
#include <stdbool.h>

bool linearSearch(int array[], int target, int size)
{

    for (int index = 0; index < size; index++)
    {
        if (array[index] == target)
        {
            printf("%d found in the array at index %d\n", target, index);
            return true;
        }
    }
    return false;
}

void main()
{
    // linear search

    int array[10] = {122, 133, 3434, 1334, 4356, 7, 778783121, 12, 313, 10};

    int target = 10;

    int size = sizeof(array) / sizeof(array[0]);

    printf("%d", linearSearch(array, target, size));
}