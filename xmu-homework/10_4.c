#include <stdio.h> 


struct complex
{ 
    int real; 
	int imag; 
}; 
//函数实现写在这里
struct complex multiply(struct complex x, struct complex y)
{
    struct complex result;
    result.real = x.real * y.real - x.imag * y.imag;
    result.imag = x.real * y.imag + x.imag * y.real;
    return result;
}


	

int main() 
{
	struct complex product, x, y; 
    scanf("%d%d%d%d", &x.real, &x.imag, &y.real,&y.imag); 
	product = multiply(x, y); 
	printf("(%d+%di) * (%d+%di) = %d + %di\n",  x.real, x.imag, y.real, y.imag, product.real, product.imag); 
	return 0; 
} 
	