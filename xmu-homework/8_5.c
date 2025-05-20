#include <stdio.h>
#include <string.h>
#define MAXN 40

//函数实现写在这里
void strmcpy(char *t, int m, char *s)
{
    int length = strlen(t);
    if (m > length)
    {
        *s = '\0';
    } else {
        for (int i = 0; i < length - m + 1; i++) {
            *(s + i) = *(t + m + i - 1);
        }
        *(s + length - m + 1) = '\0';//末尾添加终止符
    }
}
int main()
{
    char t[MAXN], s[MAXN];
    int m;
    scanf("%d\n", &m);
    gets(t);
    strmcpy( t, m, s );
    printf("%s\n", s);
    return 0;
}
