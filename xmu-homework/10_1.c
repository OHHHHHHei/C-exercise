#include <stdio.h>

typedef struct 
{
    char name[11];
    float basic;
    float fluctuate;
    float expenses;
    float actual;
} staff;

int main(void)
{
    int n;
    scanf("%i", &n);

    staff s[n];
    for (int i = 0; i < n ; i++)
    {

        scanf("%s %f %f %f", &s[i].name, &s[i].basic, &s[i].fluctuate, &s[i].expenses);

        s[i].actual = s[i].basic + s[i]. fluctuate - s[i].expenses;
    }
       

    for (int i = 0; i < n; i++)
    {
        printf("%s %.2f", s[i].name, s[i].actual);
        printf("\n");
    }

    return 0;
}