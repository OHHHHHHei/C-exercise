#include <stdio.h>
#include <string.h>
#define MAXS 30


//����ʵ��д������
char *search(char *s, char *t)
{
    int length_s = strlen(s);
    int length_t = strlen(t);
    // ���t�ǿ��ַ��������ձ�׼strstr����Ϊ������s
    if (length_t == 0) {
        return s;
    }
    // ���t��s����t��������s��
    if (length_t > length_s) {
        return NULL;
    }
    for (int i = 0; i < length_s - length_t; i++) {
        int match = 1;
        for (int j = 0; j < length_t; j++) {
            if (*(s + i + j) != *(t + j)) {
                match = 0; // ���ֲ�ƥ����ַ�
                break;     // ��������Ƚϵ�ǰ��ʼλ��
            }
        }
        if (match) {
            return (s + i); // �ҵ���ȫƥ�䣬������ʼָ��
        }
    }
    return NULL; // �������δ�ҵ�ƥ��
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