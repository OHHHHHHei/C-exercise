#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int main()
{
    int integer_num;
    scanf("%i", &integer_num);
    int integer[integer_num];
    for (int i = 0; i < integer_num; i++)
    {
        scanf("%i", &integer[i]);
    }
    
    int min = INT_MAX;
    int max = integer[0];

    for (int i = 0; i < integer_num; i++)
    {
        if (min > integer[i])
        {
            min = integer[i];
            continue;
        }
        if (max < integer[i])
        {
            max = integer[i];
        }
    }
    printf("%i", max - min);

}