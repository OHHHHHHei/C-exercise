#include <stdio.h>
#include <string.h>
#define MAXS 30


//函数实现写在这里
char *search(char *s, char *t)
{
    int length_s = strlen(s);
    int length_t = strlen(t);
    // 如果t是空字符串，按照标准strstr的行为，返回s
    if (length_t == 0) {
        return s;
    }
    // 如果t比s长，t不可能在s中
    if (length_t > length_s) {
        return NULL;
    }
    for (int i = 0; i < length_s - length_t; i++) {
        int match = 1;
        for (int j = 0; j < length_t; j++) {
            if (*(s + i + j) != *(t + j)) {
                match = 0; // 发现不匹配的字符
                break;     // 无需继续比较当前起始位置
            }
        }
        if (match) {
            return (s + i); // 找到完全匹配，返回起始指针
        }
    }
    return NULL; // 遍历完毕未找到匹配
}
 

int main()
{

    char s[MAXS], t[MAXS], *pos;
    gets(s);
    gets(t);

    pos = search(s, t);

    if (pos != NULL)

        printf("%d\n", pos - s);

    else

        printf("-1\n");

    return 0;
}