#include <stdio.h>

int main(void)
{
    int n;
    scanf("%i", &n);
    int integer[2][n];
    for(int i = 0; i < 2; i++) 
    {
        for(int j = 0; j < n; j++) 
        {
            integer[i][j] = 0;
        }
    }
    for(int i = 0; i < n; i++)
    {
        scanf("%i", &integer[0][i]);
    }
    for(int i = 0;i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(integer[0][i] == integer[0][j])
            {
                integer[1][i]++;
            }
        }
    }
    int max = 0;
    for(int i = 0; i < n; i++)
    {
        if(integer[1][i] > max)
        {
            max = integer[1][i];
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(integer[1][i] == max)
        {
            printf("%i %i", integer[0][i], integer[1][i]);
            break;
        }
    }
    return 0;
}
