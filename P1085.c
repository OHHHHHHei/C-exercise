#include <stdio.h>

int main(void)
{
    int school_time, afterschool_time, most_unhappy_day = 0, time_total = 0;
    for(int i = 0; i < 7; i++)
    {
         scanf("%i %i", &school_time, &afterschool_time);
        if(school_time + afterschool_time > 8 && time_total < school_time + afterschool_time)
        {
            time_total = school_time + afterschool_time;
            most_unhappy_day = i + 1;
        }
        
    }
    printf("%i", most_unhappy_day);
    return 0;
}