#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    scanf("%d", &size);
    int num = 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%02d", num);
            num++;
        }
        printf("\n");
    }

    num = 1;
    printf("\n");

    for (int i = 0; i < size; i++)
    {
        for (int k = 0; k < size - i - 1; k++)
        {
            printf("  ");
        }
        
        for (int j = 0; j <= i; j++)
        {
            printf("%02d", num);
            num++;
        }
        printf("\n");
    }
    
    return 0;
}