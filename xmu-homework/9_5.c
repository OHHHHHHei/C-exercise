#include <stdio.h>
#include <string.h>
//函数实现写在这里
void fun(char *s)
{
    char integer[10] = {'0', '1', '2', '3', '4' , '5', '6', '7', '8', '9'};
    int length = strlen(s);
    char temp[length + 1];
    int index = 0;
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if(s[i] == integer[j])
            {
                temp[index++] = s[i];
                break;
            }
        }
    }
    temp[index] = '\0';
    for (int i = 0; i <= index; i++)
    {
        s[i] = temp[i];
    }
}




int main()
{
  char item[80];
  gets(item);
  fun(item);
  printf("%s\n",item);
  return 0;
}