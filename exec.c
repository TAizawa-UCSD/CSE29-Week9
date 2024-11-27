#include <stdio.h>
#include <unistd.h>

int main(){
  //             argv[0]
  char* args[] = {"ls", "-lt", "..", NULL};
  execvp("ls",args);
  printf("This isn't printed.\n");
}
