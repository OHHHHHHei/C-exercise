#include <stdio.h>
#include <string.h>
#define MAXLENGTH 100

 

//����ʵ��д������
int isPalindrome(const char *str, char *pch)
{
    int length = strlen(str);
    int same = 0;
    for (int i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - 1 - i])//����Ƚ�
        {
            same = 1;
            break;//��⵽���ǻ��������˳�
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
        printf("�ǻ��ģ��м��ַ���%c\n",mid);
    else
        printf("���ǻ��ģ��м��ַ���%c\n",mid);
    return 0;
}