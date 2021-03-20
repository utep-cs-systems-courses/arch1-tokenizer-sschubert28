#include <stdio.h>
#include "tokenizer.h"

int main()
{
  printf("Welcome to my Tokenizer.\n");
  printf("Please enter your sentence. If you want to quite please enter 'q'.\n");
  char word[100];
  char *pointer_word;

  
  char *start_word;
  char *end_word;
  int num_words;
  char *part_word;

  pointer_word = &word[0];
  num_words = 0;

  while(*word != 'q') {
    printf("> ");
    fgets(word, 100, stdin);
    printf("%s \n", word);

    //    num_words = count_words(pointer_word);
    //    printf("%d \n", num_words);

    start_word = word_start(pointer_word);
    end_word = word_terminator(start_word);
    short a;
    a = end_word - start_word;
    part_word = copy_str(start_word, a);

    while(*part_word != '\0') {
      printf("%c ", *part_word);
      *part_word++;
    }
    printf("\n");
    


    
  }
  return 0;
}
