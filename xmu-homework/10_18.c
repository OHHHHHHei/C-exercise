#include <stdio.h>

int main(void)
{
    int n;
    scanf("%i", &n);

    int person[n];
    for (int i = 0; i < n; i++) {
        person[i] = 0;
    }
    //����
    int count = 0;
    while (1)
    {
        int exist = 0;
        int taotai = 0;
            for (int i = 0; i < n; i++) {//������̭��ѭ��
            if (person[i] != 1) {
                count++;//���û����̭��������һ
            }



            if (count == 3) {//�����3�ı����������λ�õ��˱���̭
                person[i] = 1;
                taotai = 1;
                count = 0;
                for (int j = 0; j < n; j++) {//��̭��һ����֮��������������
                    if (person[j] == 0) {
                        exist++;
                    }
                }
                if (exist == 1) {//���ֻʣһ���ˣ��ʹ�ӡ����ԭ���ı��
                    for (int j = 0; j < n; j++) {
                        if (person[j] == 0) {
                            printf("%i",j + 1);
                            return 0;
                            }
                        }
                    }
            }

            if (taotai == 0 && i == n - 1) {
                i = -1;
            }
        }
    
    }

}