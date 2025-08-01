#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
	pid_t pid;
	int data;

	while(1)
	{
		printf("please input a data\n");
		scanf("%d", &data);

		if(data == 1)
		{
			pid = fork();
			if(pid > 0)
			{
			}
			else if (pid == 0)
			{
				while(1)
				{
					printf("do net request, pid = %d\n", getpid());
					sleep(3);
				}
			}
		}
		else
		{
			printf("wait, do nothing\n");
		}
	}
	return 0;
}

