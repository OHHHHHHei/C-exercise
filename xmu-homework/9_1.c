#include <stdio.h>
#include <string.h>
#define MAXLENGTH 100

 

//����ʵ��д������

 

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