#include <stdio.h>
#include <string.h>
#define MAXLENGTH 100

 

//函数实现写在这里
int isPalindrome(const char *str, char *pch)
{
    int length = strlen(str);
    int same = 0;
    for (int i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - 1 - i])//逐项比较
        {
            same = 1;
            break;//检测到不是回文立马退出
        }
    }
    if (same == 0)
    {
        *pch = str[(length + 1) / 2 - 1];
        return 1;
    } else
    {
        *pch = str[(length + 1) / 2 - 1];
        return 0;
    }
}
 

int main()
{
    char str[MAXLENGTH],mid;
    scanf("%s",str);
    if(isPalindrome(str, &mid))
        printf("是回文！中间字符是%c\n",mid);
    else
        printf("不是回文！中间字符是%c\n",mid);
    return 0;
}