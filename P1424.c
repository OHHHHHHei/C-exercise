#include <stdio.h>

int main(void)
{
    int start_day, total_days, distance = 0;
    scanf("%i %i", &start_day, &total_days);
    for(int i = 0; i < total_days; i++)
    {
        int current_day = (start_day + i - 1) % 7 + 1;
        if(current_day != 6 && current_day != 7)
        {
            distance += 250;
        }
    }
    printf("%i", distance);
    return 0;
}