#include <stdio.h>

int main(void)
{
    int l, m;
    scanf("%i %i", &l, &m);
    int tree[l + 1];
    for (int i = 0; i < l + 1; i++)
    {
        tree[i] = 1;
    }
    int u, v;
    for (int i = 0; i < m; i++)
    {
        scanf("%i %i", &u, &v);
        for (int j = u; j <= v; j++)
        {
            tree[j] = 0;
        }
    }
    int num = 0;
    for (int i = 0; i <= l; i++)
    {
        if(tree[i] == 1)
        {
            num++;
        }
    }
    printf("%i", num);
    return 0;
}