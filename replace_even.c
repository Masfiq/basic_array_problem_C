#include <stdio.h>
#include <stdbool.h>

int main()
{
    int array[] = {12, 34, 434, 54, 545, 545, 52121, 2, 112, 2334, 4545, 342, 23, 57, 3555, 233, 34, 54, 312, 32, 54, 54};

    int array_size = sizeof(array) / sizeof(array[0]);

    int specific_value = 2;

    for (int index = 0; index < array_size; index++)
    {
        if (array[index] % 2 == 0)
        {
            array[index] = 2;
        }
    }

    for (int index = 0; index < array_size; index++)
    {
        printf("%d\n", array[index]);
    }
}