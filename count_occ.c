#include <stdio.h>
#include <stdbool.h>

int main()
{
    int array[] = {12, 34, 434, 54, 545, 545, 52121, 2, 112, 2334, 4545, 342, 23, 57, 3555, 233, 34, 54, 312, 32, 54, 54};

    int target_element = 1000;

    bool flag = false;

    int count = 0;

    int array_size = sizeof(array) / sizeof(array[0]);

    for (int index = 0; index < array_size; index++)
    {
        if (array[index] == target_element)
        {
            flag = true;
            count = count + 1;
        }
    }

    if (flag == true)
    {
        printf("element found %d times", count);
    }
    else
    {
        printf("element not found");
    }
}