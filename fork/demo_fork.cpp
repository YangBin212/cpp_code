#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
	pid_t pid;
	pid = getpid();

	fork();

	printf("my pid is %d\n", pid);

	return 0;
}
