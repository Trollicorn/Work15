#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
 int f = fork();
 int j = 0;
 if (f) j = fork();
 if (!j){

 }

}
