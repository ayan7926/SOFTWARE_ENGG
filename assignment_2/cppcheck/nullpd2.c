#include<stdio.h>
#include<string.h>

int main(int argc, char ** argv)
{
  char buf[255];
  char * ptr = NULL;
  if (argc>1) {
    ptr = argv[1];
  }
  strcpy(str,ptr);
  return 0;
}
