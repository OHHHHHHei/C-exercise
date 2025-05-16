#include <stdio.h>
#include <string.h>
#define MAXS 10

//函数实现写在这里
char *str_cat(char *s, char *t)
{
    int length_s = strlen(s);
    int length_t = strlen(t);
    for (int i = length_s; i < length_t + length_s; i ++) {
        *(s + i) = *(t + i - length_s);
    }
    *(s + length_s + length_t) = '\0';
    return s;
}
 

int main()
{
    char *p;
    char str1[MAXS+MAXS] = {'\0'}, str2[MAXS] = {'\0'};
    scanf("%s%s", str1, str2);

    p = str_cat(str1, str2);

    printf("%s\n%s\n", p, str1);

    return 0;
}