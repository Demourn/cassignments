#include <stdio.h>

int main(int argc, char *argv[])
{
  double sum = 1;
  int n = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("The sum of series is: ");
  for (int i = 1; i <=n; i++){
    sum += 1.0/i;
  }
  printf("%f", sum);
  return 0;
}
