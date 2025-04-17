#include <stdio.h>
#include <string.h>
//中心拓展法
int expand_form_center(char *s, int left, int right, int len)
{
    while(left >= 0 && right < len && s[left] == s[right])
    {
        left--;
        right++;
    }

    return right - left - 1;
}


int main(void)
{
    char str[1001];
    int i = 0, ch;
    while ((ch = getchar()) != '\n' && ch != EOF && i < sizeof(str) - 1)  // 循环读取字符
    {
        str[i++] = ch;            // 将读取的字符存入数组并递增索引
    }
    str[i] = '\0';//放入空字符


    int len = strlen(str);
    int maxLen = 0;

    for(int i = 0; i < len; i++)
    {
        int len1 = expand_form_center(str, i, i, len);//奇数个的情况

        int len2 = expand_form_center(str, i, i + 1, len);//偶数个的情况

        int max = (len1 > len2) ? len1 : len2;

        if(max > maxLen)
        {
            maxLen = max;
        }
    }

    printf("%d", maxLen);
    return 0;

}