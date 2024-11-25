#include <stdio.h>
#include <unistd.h>

int main(){
  pid_t result = fork();
  if(result){
    printf("fork returned true\n");
  } else {
    char* args[] = {"ls", NULL};
    execvp("ls", args);
    /*
    while(1){
      printf("fork returned false\n");
    }
    */
  }
}
