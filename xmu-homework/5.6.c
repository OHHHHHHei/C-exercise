#include <ctype.h>
#include <stdio.h>
#include <string.h>

int hexCharToDecimal(char c) {
    
    //���ַ�0-9ת��Ϊ����0-9
    if (c >= '0' && c <= '9')
        return c - '0';
    //��A-Fת��Ϊ10-15
    if (c >= 'A' && c <= 'F')
        return c - 'A' + 10;
    if (c >= 'a' && c <= 'f')
        return c - 'a' + 10;
    return -1; // �Ƿ��ַ�
}

int main() {
    char input[100], output[100];
    
    // ʹ��scanf��ȡ�ַ�ֱ��'#'
    scanf("%[^#]", input);
    
    // ���ĵ�'#'�ַ�
    getchar();
    int n = strlen(input);
    int j = 0;

    // ���ҵ�һ��ʮ�������ַ�
    int first_hex_pos = 0;
    for(int i = 0; i < n; i++) 
    {
        if(isxdigit(input[i])) 
        {
            first_hex_pos = i;
            break;
        }
    }
    
    
    
    int negative = 0;
    // ����ҵ�ʮ�������ַ�
    if(first_hex_pos != 0) {
        // ���ǰ������ķ���

        for(int i = first_hex_pos - 1; i >= 0; i--) {
            if(input[i] == '-') {
                negative = 1;
                break;
            } else if(input[i] == '+') {
                break;  // �����Ӻž�ֹͣ����
            }
        }
    }
        // ����Ǹ�������Ӹ���
        if(negative) {
            output[j++] = '-';
        }




    for(int i = 0; i < n; i++)
    {
        if(isxdigit(input[i]))
        {
            output[j] = input[i];
            j++;
        }
    }
    output[j] = '\0';//�����ֹ��

    // �ֶ���ʮ�������ַ���ת��Ϊʮ������ֵ
    long decimal_value = 0;
    int start_index = (output[0] == '-') ? 1 : 0; // ��������
    
    for (int i = start_index; output[i] != '\0'; i++) {
        decimal_value = decimal_value * 16 + hexCharToDecimal(output[i]);//��16��λ
    }
    
    // ����Ǹ�����ȡ��
    if (negative) {
        decimal_value = -decimal_value;
    }


    printf("%ld", decimal_value);
    return 0;
}