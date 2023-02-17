#include <stdio.h>
#include <string.h>
#include <unistd.h>

int mayhemit(char *buf)
{
  if(strlen(buf) >= 3)
    if(buf[0] == 'b')
      if(buf[1] == 'u')
        if(buf[2] == 'g') {
          printf("You've got it!");
          abort();
        }
    return 0;
}

int main(int argc, char *argv[])
{
  char buf[12];
  read(STDIN_FILENO, buf, 12);

  mayhemit(buf);
  return 0;
}
