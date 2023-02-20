#include <stdio.h>
#include "history.h"
#include "tokenizer.h"

#define MAX 50


int main()
{
  char str[MAX];

  printf("$ ");

  fgets(str,MAX, stdin);

  printf("%s\n", str);

  fflush(stdin);

  return 0;

<<<<<<< HEAD
}
=======
}
>>>>>>> e3109049d68269c169b0ad7a856cd051df61192b
