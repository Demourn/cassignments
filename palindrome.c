#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
  int flag = 0;
  int length = 0;
  int b = 0;
  char string[100];
  char reverse[100];
  printf("Enter a string: ");
  scanf("%s", string);
  length = strlen(string);
  for(int i = length-1; i>=0; i--){
    reverse[b] = string[i];
    b++;
  }
  for(int i = 0; i < length; i++){
    if(string[i] != reverse[i]){
      flag = 1;
      break;
    }
  }
  if(flag == 0){
    printf("The string is a palindrome.\n");
  } else {
    printf("The string is not a palindrome.\n");
  }
  return 0;

}
