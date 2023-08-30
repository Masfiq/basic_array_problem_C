#include <stdio.h>

int main()
{
    int array[] = {12, 34, 434, 54, 545, 545, 52121, 2, 112, 2334, 4545, 342, 23};

    int element = 67;

    int index_to_insert = 7;

    int arraySize = sizeof(array) / sizeof(array[0]);
    int newArraySize = arraySize + 1;

    int newArray[newArraySize];

    int arrayIndex = 0;
    int newArrayIndex = 0;

    for (; arrayIndex < index_to_insert; arrayIndex++)
    {
        newArray[newArrayIndex] = array[arrayIndex];
        newArrayIndex++;
    }

    newArray[index_to_insert] = element;
    newArrayIndex = newArrayIndex + 2;
    arrayIndex++;

    for (; arrayIndex < arraySize; arrayIndex++)
    {
        newArray[newArrayIndex] = array[arrayIndex];
        newArrayIndex++;
    }

    for (int index = 0; index < newArraySize; index++)
    {
        printf("%d\n", newArray[index]);
    }
}