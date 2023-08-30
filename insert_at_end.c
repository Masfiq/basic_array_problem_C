#include <stdio.h>

int main()
{
    int array[] = {12, 34, 434, 54, 545, 545, 52121, 2, 112, 2334, 4545, 342, 23};

    int element = 67;

    int size = sizeof(array) / sizeof(array[0]);

    int newArray[size + 1];

    for (int index = 0; index < size; index++)
    {
        newArray[index] = array[index];
    }

    int lastIndex = (size + 1) - 1;
    newArray[lastIndex] = element;

    for (int index = 0; index < size + 1; index++)
    {
        printf("%d\n", newArray[index]);
    }
}