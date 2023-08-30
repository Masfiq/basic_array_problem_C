#include <stdio.h>
#include <stdbool.h>

int main()
{
    int array[] = {12, 34, 434, 54, 545, 545, 52121, 2, 112, 2334, 4545, 342, 23};

    int target_element = 1000;

    int target_index;

    bool flag = false;

    int array_size = sizeof(array) / sizeof(array[0]);

    for (int index = 0; index < array_size; index++)
    {
        if (array[index] == target_element)
        {
            flag = true;
            target_index = index;
            break;
        }
    }

    if (flag == true)
    {
        printf("element found at index %d", target_index);
    }
    else
    {
        printf("element not found");
    }
}