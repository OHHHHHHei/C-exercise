#include <stdio.h>

int main(void)
{
    int n;
    scanf("%i", &n);

    int person[n];
    for (int i = 0; i < n; i++) {
        person[i] = 0;
    }
    //报数
    int count = 0;
    while (1)
    {
        int exist = 0;
        int taotai = 0;
            for (int i = 0; i < n; i++) {//报数淘汰人循环
            if (person[i] != 1) {
                count++;//如果没被淘汰，计数加一
            }



            if (count == 3) {//如果是3的倍数，则这个位置的人被淘汰
                person[i] = 1;
                taotai = 1;
                count = 0;
                for (int j = 0; j < n; j++) {//淘汰完一个人之后立马检查存活人数
                    if (person[j] == 0) {
                        exist++;
                    }
                }
                if (exist == 1) {//如果只剩一个人，就打印出他原来的编号
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