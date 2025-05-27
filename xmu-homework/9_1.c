#include <stdio.h>
#include <string.h>
#define MAXLENGTH 100

 

//函数实现写在这里

 

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