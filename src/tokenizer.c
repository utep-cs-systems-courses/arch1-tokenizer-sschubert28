#include <stdio.h>
#include <stdlib.h>

int space_char(char c)
{
  if(c == '\t' || c == ' ' || c == '\0')
    return 1;
  return 0;
}

int non_space_char(char c)
{
  if(c != '\t' && c != ' ' && c != '\0')
    return 1;
  return 0;
}

char *word_start(char *str)
{
  char *start;
  
  if(*str == '\0') {
    return start;
  }

  while(space_char(*str)) {
    if(non_space_char(*str)) {
	start = str;
	return start;
    }
    *str++;
  }
  
  start = str;
  return start;
}

char *word_terminator(char *word)
{
  while(non_space_char(*word)) {
    *word++;
  }
  return word;
}

int count_words(char *str)
{
  int num_words;
  int past_char;
  
  num_words = 0;
  past_char = 0;

  while(*str != '\0') {
    printf("%c,", *str);
    if(non_space_char(*str)) {
      if(past_char == 0) {
	printf("1,");
	num_words += 1;
	past_char = 1;
      }
      past_char = 1;
    } else {
      past_char = 0;
    }
    *str++;
  }
  printf("%d \n", num_words);
  printf("\n");
  return num_words;
}

char *copy_str(char *inStr, short len) {
  char *new_word = (char*) calloc(len, sizeof(char));
  char *temp;

  temp = new_word;

  for(int i = 0; i < len; i++) {
    *temp = *inStr;
    *temp++;
    *inStr++;
  }
  
  return new_word;
}
