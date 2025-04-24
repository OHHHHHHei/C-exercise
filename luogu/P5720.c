#include <stdio.h>

int main(void)
{
    int a;
    scanf("%i", &a);
    int count = 0;
    while (a != 1)
    {
        count++;
        a = a / 2;
       
    }
    printf("%i", count + 1);
    return 0;
    
}