#include <stdio.h>

int main(int argc, char *argv[])
{
  int n = 0;
  int c = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  for(int i = 1; i <= n; i++){
    if(n%i == 0){
      c++;
    }
  }
  if(c == 2){
    printf("PRIME\n");
  } else {
    printf("COMPOSITE\n");
  }
  return 0;
}
