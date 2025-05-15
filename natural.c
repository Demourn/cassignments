#include <stdio.h>

int main(int argc, char *argv[])
{
  int n = 0;
  int sum = 0;
  printf("Enter a natural number: ");
  scanf("%d", &n);
  printf("%d\n", n);
  if(n < 0){
    printf("Error: The number is not natural.\n");
  }
  for(int i = 1; i<=n; i++){
    sum += i;
  }
  printf("The sum of the first %d natural numbers is: %d\n", n, sum);
  return 0;

}
