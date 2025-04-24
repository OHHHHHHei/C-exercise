#include <stdio.h>

int main(void)
{ 
    int k;
    scanf("%i", &k);
    int n = 1;
    double sum = 0.0;


    while (sum <= k)
    {
        sum += (1.0 / n);
        n++;
    }


    printf("%i", n - 1);
    return 0;
}