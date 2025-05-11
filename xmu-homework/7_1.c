#include <stdio.h>

//���������ֺ���
void swap(int arr[], int p, int q)
{
    int temp = arr[q];
    for (int i = q; i >= p + 1; i--){
        arr[i] = arr[i - 1];
    }
    arr[p] = temp;
}

//���ݺ���
void swapback(int arr[], int p, int q)
{
    int temp = arr[p];
    for (int i = p; i <= q - 1; i++){
        arr[i] = arr[i + 1];
    }
    arr[q] = temp;
}

//��ӡ����
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

//ȫ���к��������ĵݹ飩
void perm(int arr[], int p, int q)
{
    if (p == q)
    {
        printArray(arr, q + 1);
    }
    else{
        for (int i = p; i <= q; i++)
        {
            swap(arr, p, i);
            perm(arr, p + 1, q);
            swapback(arr, p, i);
        }
    }
     
}

int main(void)
{
    int n;
    scanf("%i", &n);
    //��ʼ������
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }


    perm(arr, 0, n - 1);
    return 0;
    
}