#include <stdio.h>

//函数实现写在这里

 double P(int n, double x){
    if (n == 0){
        return 1;
    }else if (n == 1){
        return x;
    }else{
        return ((2*n - 1)*P(n - 1, x) - (n - 1)*P(n - 2, x)) / n; 
    }


 }

int main()
{
    int n;
    double x;
    scanf("%d %lf", &n, &x);
    printf("%.2f\n", P(n,x));
    return 0;

}
