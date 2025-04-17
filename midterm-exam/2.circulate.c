#include <stdio.h>

int main(void)
{
    int decimal,shift;
    int binary[32] = {0};
    int length = 0;

    scanf("%i", &decimal);
    scanf("%i", &shift);

    int temp = decimal;
    while (temp > 0)
    {
        binary[length] = temp % 2;
        temp = temp / 2;
        length++;
    }

    if(length == 0)
    {
        length = 1;
    }




    shift = shift % length;
    if (shift > 0)
    {
        int temp_binary[32] = {0};

        for (int i = 0; i < length; i++)
        {
            temp_binary[i] = binary[i];
        }

        for(int i = 0; i < length; i++)
        {
            int shifted = (i + shift) % length;
            binary[i] = temp_binary[shifted];
        }
    }

    for(int i = length - 1;i >= 0; i--)
    {
        printf("%i", binary[i]);
    }


    
}