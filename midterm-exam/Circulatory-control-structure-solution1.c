#include <stdio.h>
 int fghij, abcde, n;
 int flag[10] = {0};//��֤0-9�Ƿ��Ѿ�ʹ��
//��֤����
 int is_ok(int t) 
 {
    for (int i = 0; i < 5; i++) 
    {
        if (flag[t % 10])
        {
            return 0;//�������Ѿ���ʹ��
        }
        flag[t % 10] = 1;
        t /= 10;
    }
    return 1;
 }


 int main() {
    scanf("%d", &n);
    //ö�����п��ܵ�fghij
    for (fghij = 1234; fghij <= 98765; fghij++) 
    {
        abcde = fghij * n;//����abcde
        if (abcde >= 100000)//���abcde������λ�����ų�
        {
            continue;
        }
        for (int i = 0; i < 10; i++)//��ʼ��flag����
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