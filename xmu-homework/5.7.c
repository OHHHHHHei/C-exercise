#include <stdio.h>
#include <string.h>
//������չ��
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
    while ((ch = getchar()) != '\n' && ch != EOF && i < sizeof(str) - 1)  // ѭ����ȡ�ַ�
    {
        str[i++] = ch;            // ����ȡ���ַ��������鲢��������
    }
    str[i] = '\0';//������ַ�


    int len = strlen(str);
    int maxLen = 0;

    for(int i = 0; i < len; i++)
    {
        int len1 = expand_form_center(str, i, i, len);//�����������

        int len2 = expand_form_center(str, i, i + 1, len);//ż���������

        int max = (len1 > len2) ? len1 : len2;

        if(max > maxLen)
        {
            maxLen = max;
        }
    }

    printf("%d", maxLen);
    return 0;

}