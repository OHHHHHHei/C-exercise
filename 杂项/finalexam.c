#include <stdio.h>

int main() {
    int input, output = 0;
    scanf("%d", &input);
    if (input > 10) 
        if (input > 100) 
            output = 3;
    else if (input > 5) 
        output = 2;
    else 
        output = 1;
    printf("%d", output);
    return 0;
}





char code(char *x, int k)
{
  *x = *x + k;
  if ( (*x>'Z' && *x<'Z'+k) || *x > 'z')
    *x = *x-26;
  return *x;
}