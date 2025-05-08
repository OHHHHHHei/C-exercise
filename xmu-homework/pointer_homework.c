#include <stdio.h>

int main(void)
{
    int num;
    printf("how many numbers?");
    scanf("%i", &num);
    printf("input %i numbers:", num);

    int integer[num];
    int *p = integer;// 声明指向数组首地址的指针p
    for (int i = 0; i < num; i++)
    {
        scanf("%i", p + i);
    }

    int move;
    printf("how many place do you want to move?");
    scanf("%i", &move);

    // 创建临时数组用于存储移位后的结果
    int temp[num];
    int *p_temp = temp;
    for (int i = 0; i < num; i++)// 执行循环移位操作
    {
        int final_place = (i + move) % num; // 计算元素移动后的新位置
        *(p_temp + final_place) = *(p + i);// 将原数组元素复制到新位置
    }

    // 输出移位后的数组
    printf("Now,they are:");
    for (int i = 0; i < num; i++)
    {
        printf("%i", *(p_temp + i));
        if (i != num - 1)// 在除了最后一个元素外，每个元素后添加一个空格
        {
            printf(" ");
        }
    }

    return 0;
}