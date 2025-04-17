#include <ctype.h>
#include <stdio.h>
#include <string.h>

int hexCharToDecimal(char c) {
    
    //将字符0-9转化为数字0-9
    if (c >= '0' && c <= '9')
        return c - '0';
    //换A-F转化为10-15
    if (c >= 'A' && c <= 'F')
        return c - 'A' + 10;
    if (c >= 'a' && c <= 'f')
        return c - 'a' + 10;
    return -1; // 非法字符
}

int main() {
    char input[100], output[100];
    
    // 使用scanf读取字符直到'#'
    scanf("%[^#]", input);
    
    // 消耗掉'#'字符
    getchar();
    int n = strlen(input);
    int j = 0;

    // 查找第一个十六进制字符
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
    // 如果找到十六进制字符
    if(first_hex_pos != 0) {
        // 检查前面最近的符号

        for(int i = first_hex_pos - 1; i >= 0; i--) {
            if(input[i] == '-') {
                negative = 1;
                break;
            } else if(input[i] == '+') {
                break;  // 遇到加号就停止查找
            }
        }
    }
        // 如果是负数，添加负号
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
    output[j] = '\0';//添加终止符

    // 手动将十六进制字符串转换为十进制数值
    long decimal_value = 0;
    int start_index = (output[0] == '-') ? 1 : 0; // 跳过负号
    
    for (int i = start_index; output[i] != '\0'; i++) {
        decimal_value = decimal_value * 16 + hexCharToDecimal(output[i]);//乘16进位
    }
    
    // 如果是负数，取反
    if (negative) {
        decimal_value = -decimal_value;
    }


    printf("%ld", decimal_value);
    return 0;
}