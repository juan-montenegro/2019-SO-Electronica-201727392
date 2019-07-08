#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
int main(int argc, char** argv){
	pid_t pid;
	int x;
	x = 100;
	
	pid = fork();
	if (pid != 0){
		printf("ID padre: %d, Variable pid hijo:%d, x = %d\n",getpid(),pid,x);
	}
	else{
		printf("ID padre: %d, Variable pid hijo:%d, x = %d\n",getpid(),pid,x);
	}
	return 0;
}
