#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <time.h>

int main(){
  printf("i need a spoon but i can only find forks\n");
  int f = fork();
  int j = 0;
  if (f) j = fork();
  if (!j){printf("%d is trying to turn into a spoon\n",getpid());}
  int t;
  if (!f) {srand(time(NULL));t=rand()%15+5;/*printf("%d\n",t);*/sleep(t);exit(t);}
  else if (!j) {srand(time(NULL)+1);t=rand()%15+5;/*printf("%d\n",t);*/sleep(t);exit(t);}
  if (j) {
    int n;
    int c = wait(&n);
    printf("%d has turned into a spork after %d seconds\n",c,WEXITSTATUS(n));
    printf("this might work now i'll leave\n");
  }
  return 0;
}
