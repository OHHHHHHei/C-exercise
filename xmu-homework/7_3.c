#include <stdio.h>

 

//����ʵ��д������
void dectobin(int n){
    if (n == 0){
        return;
    }else{
        int binary = n % 2;
        dectobin(n / 2);
        printf("%i", binary);
    }
}



int main()
{
    int n;
    scanf("%d", &n);
    if (n == 0){
        printf("0");
    }
    dectobin(n);
    return 0;

}