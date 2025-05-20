#include <stdio.h>
#include <string.h>
#define MAX_LEN  20
#define MAX_STRING 20

void swap(char *s1, char *s2)
{
    char temp[MAX_LEN + 1];
    strcpy(temp, s1);
    strcpy(s1, s2);
    strcpy(s2, temp);
}

int main(void)
{
    int n;
    scanf("%i", &n);
    getchar();
    char string[MAX_STRING][MAX_LEN];
    for (int i = 0; i < n; i++) {
        gets(string[i]);
    }

    for (int j = 0; j < n; j++) {
        int isswap = 0;
        for (int i = 0; i < n - 1; i++) {
 
            if (strcmp(string[i], string[i + 1]) < 0) {
                ;
            } else {
                swap(string[i], string[i + 1]);
                isswap = 1;
            }
        }
        if(isswap = 0) {
            break;
        }
    }


    for (int i = 0; i < n; i++) {
        printf("%s\n", string[i]);
    }

}