#include <stdio.h>
#include <string.h>
#include <ctype.h>





int main(void)
{
    char s[500];
    gets(s);//��ȡ
    int length = strlen(s);
    int index = 0;
    int integer[100];
    //ʶ������
    for (int i = 0; i < length; i++)
    {
        if (isdigit(s[i]))//Ѱ�ҵ�һ������
        {
            int num = 0;
            int intlength = 0;
            for (int j = i; j < length; j++)//���ѭ��
            {
                if(isdigit(s[j]))//�����������
                {
                    intlength++;
                    num = num * 10 + (s[j] - '0');//���ַ���ASCIIֵת��Ϊ����ֵ
                } else//�����������֣�ֱ������ѭ��
                {
                    break;
                }
            }
            integer[index++] = num;
            i += intlength - 1;//��ѭ����i++���һ����������Ҫ��ȥһ
        }
    }
    printf("%i\n", index);
    for (int i = 0; i < index; i++)
    {
        printf("%i ", integer[i]);
    }
    return 0;
}