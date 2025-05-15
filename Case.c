#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
  char word[100];
  int i=0;
  printf("Enter a word: ");
  scanf("%s", word);
  while(word[i] != '\0'){
    if(isupper(word[i])){
      word[i] = tolower(word[i]);
    } else if(islower(word[i])){
      word[i] = toupper(word[i]);
    }
    i++;
  }
  printf("The case-swapped word is: %s\n", word);
  return 0;
}
