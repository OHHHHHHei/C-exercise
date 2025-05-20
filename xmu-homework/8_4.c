#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXN 10
#define MAXS 20

//函数实现写在这里
int max_len(char *s[], int n)
{
    int max = strlen(s[0]);
    int length;
    for (int i = 0; i < n; i++) {
        length = strlen(s[i]);
        if (length > max) {
            max = length;
        }
    }
    return max;
}
 

int main()
{
    int i, n;
    char *string[MAXN] = {NULL};
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        string[i] = (char *)malloc(sizeof(char)*MAXS);
        scanf("%s", string[i]);
    }
    printf("%d\n", max_len(string, n));
    return 0;
}