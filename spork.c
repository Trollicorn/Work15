#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <time.h>

int main(){
  printf("i'm need a spoon but i can only find forks");
  int f = fork();
  int j = 0;
  if (f) j = fork();
  if (!j){
    printf("%d\n", getpid());
 }

}
