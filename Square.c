#include <stdio.h>

int main(void)
{
    int n;
    char c;
    scanf("%d %c", &n, &c);
    int height = (int)(n / 2.0 + 0.5);
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
    return 0;
}