#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char ch;
  FILE * fp = fopen(argv[1], "r");
  do {
	ch = fgetc(fp);
	printf("%c", ch);
  }
  while(ch != EOF);
  fclose(fp);
  return 0;
}
