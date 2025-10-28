#include <stdio.h>

int main()
{
    float end;
    scanf("%f", &end);
    float curr_pos = 0;
    float step = 2;
    int count = 0;
    while (curr_pos <= end)
    {
        curr_pos += step;
        step = step * 0.98;
        count++;
    }
    printf("%i", count);
}