#include <stdio.h>

int countdigits(int n)
{
  int count = 0;
  while (n > 0)
  {
    n /= 10;
    count++;
  }
  return count;
}

int main(int argc, char *argv[])
{
  int n = 0;
  int sum = 0;
  int digits = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  digits = countdigits(n);

  while(digits != 1){
    sum = 0;
    while (n > 0)
    {
      sum += n % 10;
      n /= 10;
    }
    n = sum;
    digits = countdigits(n);
  }
  printf("The single digit is: %d\n", sum);
  return 0;
}
