#include <stdio.h>
#include <unistd.h>

int main(){
  pid_t result = fork();
  if(result){
    printf("fork returned true\n");
  } else {
    printf("fork returned false\n");
  }
}
