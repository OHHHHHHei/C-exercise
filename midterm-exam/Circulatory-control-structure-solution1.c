#include <stdio.h>
 int fghij, abcde, n;
 int flag[10] = {0};//验证0-9是否已经使用
//验证函数
 int is_ok(int t) 
 {
    for (int i = 0; i < 5; i++) 
    {
        if (flag[t % 10])
        {
            return 0;//该数字已经被使用
        }
        flag[t % 10] = 1;
        t /= 10;
    }
    return 1;
 }


 int main() {
    scanf("%d", &n);
    //枚举所有可能得fghij
    for (fghij = 1234; fghij <= 98765; fghij++) 
    {
        abcde = fghij * n;//计算abcde
        if (abcde >= 100000)//如果abcde不是五位数就排除
        {
            continue;
        }
        for (int i = 0; i < 10; i++)//初始化flag数组
        {
            flag[i] = 0;
        }
        
        if (is_ok(abcde) && is_ok(fghij)) 
        {
            printf("%05d/%05d=%d\n", abcde, fghij, n);
        }
    }
    return 0;
 }