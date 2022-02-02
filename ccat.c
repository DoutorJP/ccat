#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  char ch;
  char line[500];
  FILE * fp = fopen(argv[1], "r");
  do {
	ch = fgetc(fp);
	printf("%c", ch);
  }
  while(ch != EOF);
  fclose(fp);
  return 0;
}
