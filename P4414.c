#include <stdio.h>

int main(void)
{
    int a, b, c;
    char order[4];
    scanf("%i %i %i", &a, &b, &c);
    getchar();
    for(int i = 0; i < 3; i++)
    {
        order[i] = getchar();
    }
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    for(int i = 0; i < 3; i++)
    {
        if(order[i] == 'A')
        {
            printf("%i", a);
        }
        if(order[i] == 'B')
        {
            printf("%i", b);
        }
        if(order[i] == 'C')
        {
            printf("%i", c);
        }
        if(i < 2)
        {
            printf(" ");
        }
    }
    return 0;
}