#include <stdio.h>
//函数实现写在这里
int f(int n){
    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }else{
        int result = f(n - 2) + f(n - 1);
        return result;
    }
        
}
 

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    return 0;

}