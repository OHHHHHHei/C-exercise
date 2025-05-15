#include <stdio.h>

int main(void)
{
    int n;
    scanf("%i", &n);
    int fish_cute[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &fish_cute[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int num = 0;
        for (int j = 0; j < i; j++)
        {
            if (fish_cute[j] < fish_cute[i])
            {
                num++;
            }
        }
        printf("%i", num);
        if (i < n){
            printf(" ");
        }
    }
    return 0;
}