#include <stdio.h>
#include <string.h>
#define MAXS 10
//函数实现写在这里
void Shift(char s[])
{
    int length = strlen(s);
    char temp[length];
    for (int i = 3, j = 0; i < length + 3; i++, j++)
    {
        int num = i % length;
        temp[j] = s[num];
    }
    for (int i = 0; i < length; i++)
    {
        s[i] = temp[i];
    }
}




int main()
{
    char s[MAXS];
    gets(s);
    Shift(s);
    printf("%s\n", s);
    return 0;
}