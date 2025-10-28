#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int day;
    int coin = 1;
    int total_coin = 0;
    scanf("%i", &day);
    int count = 0;

    for (int i = 0; count < day; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (count >= day)
            {
                break;
            }
            total_coin += i + 1;
            count++;
        }
        
    }
    
    printf("%i", total_coin);
}
