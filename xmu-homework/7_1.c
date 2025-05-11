#include <stdio.h>

//交换首数字函数
void swap(int arr[], int p, int q)
{
    int temp = arr[q];
    for (int i = q; i >= p + 1; i--){
        arr[i] = arr[i - 1];
    }
    arr[p] = temp;
}

//回溯函数
void swapback(int arr[], int p, int q)
{
    int temp = arr[p];
    for (int i = p; i <= q - 1; i++){
        arr[i] = arr[i + 1];
    }
    arr[q] = temp;
}

//打印函数
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

//全排列函数（核心递归）
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
    //初始化数组
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }


    perm(arr, 0, n - 1);
    return 0;
    
}