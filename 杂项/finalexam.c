#include <stdio.h>
#include <math.h>

int main(void)
{
  int n;
  scanf("%i", &n);

  int A[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%i", &A[i]);
  }
  
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += A[i];
  }
  float Avg = (float)sum / n;
  double sum_final = 0;
  for (int i = 0; i < n; i++)
  {
    sum_final += pow(A[i] - Avg, 2);
  }
  printf("%.5f", sqrt(sum_final / n));
  return 0;
}