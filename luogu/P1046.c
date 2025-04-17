#include <stdio.h>

int main(void)
{
    int apple_height[10]; 
    int taotao_height, touchable_apple = 0;
    for(int i = 0; i < 10; i++)
    {
        scanf("%i", &apple_height[i]);
    }
    scanf("%i", &taotao_height);
    for(int i = 0; i < 10; i++)
    {
        if(apple_height[i] <= taotao_height + 30)
        {
            touchable_apple++;
        }
    }
    printf("%i", touchable_apple);
    return 0;
}