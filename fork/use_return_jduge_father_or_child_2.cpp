#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>

int main()
{
	pid_t pid;
	pid_t pid2;
	pid_t retpid;

	pid = getpid();
	printf("before fork: pid = %d\n", pid);

	retpid = fork();

	pid2 = getpid();
	printf("after fork: pid = %d\n", pid2);

	if(pid == pid2)
	{
		printf("this is father print: retpid = %d\n", retpid);
	}
	else
	{
		printf("this is child print: retpid = %d, child pid = %d\n", retpid, pid2);
	}

	return 0;
}
