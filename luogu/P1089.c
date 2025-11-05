#include <stdio.h>
#include <stdlib.h>

int main()
{
    int budget[12];
    for (int i = 0; i < 12; i++)
    {
        scanf("%d", &budget[i]);
    }
    
    int leave[12];
    int deposit = 0;
    leave[0] = 300 - budget[0];

    deposit += leave[0] / 100;

    leave[0] = leave[0] % 100;

    for (int i = 1; i < 12; i++)
    {
        leave[i] = 300 + leave[i - 1] - budget[i];
        if (leave[i] < 0)
        {
            printf("%d", -(i + 1));
            return 0;
        }
        deposit += leave[i] / 100;
        leave[i] = leave[i] % 100;
        
    }
    
    int result = deposit * 120 + leave[11];
    printf("%d", result);

    return 0;
}