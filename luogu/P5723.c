#include <stdio.h>

int isprime(int integer)
{

    if (integer < 2) return 0; // С��2������0, 1, ��������������
    if (integer == 2) return 1; // 2��Ψһ��ż������
    if (integer % 2 == 0) return 0;  // ż��ֱ���ų�

    for (int i = 3; i * i <= integer; i += 2)
    {
        if (integer % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    int max_size;
    int curr_size = 0;
    int count = 0;
    scanf("%i", &max_size);

    for (int i = 2; curr_size < max_size; i++)
    {
        if (isprime(i))
        {
            if (curr_size + i > max_size)
            {
                break;
            }
            curr_size += i;
            printf("%i\n", i);
            count++;
        }
        
    }

    printf("%i\n", count);

}