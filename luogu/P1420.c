#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%i", &n);

    int integer[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &integer[i]);
    }
    
    int count = 1;
    int max_count = 1;
    int prev = integer[0];
    for (int i = 0; i < n; i++)
    {
        int curr = integer[i];
        if (curr == prev + 1)
        {
            count++;
            if (count > max_count)
            {
                max_count = count;
            }
            
        }else
        {
            count = 1;
        }
        
        prev = curr;
    }

    printf("%i", max_count);

    return 0;
    

}