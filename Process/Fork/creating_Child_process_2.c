#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	pid_t p=fork();
	if(p==0)
	{
		printf("Child Created \n");
		printf("I am Current Process %d \n",getpid());
		printf("I am Parent Process %d \n",getppid());
	}else if(p>0)
	{
		printf("Parent Created \n");
		printf("I am Current Process %d \n",getpid());
		printf("I am Parent Process %d \n",getppid());
	}else if(p<0)
	{
		printf("Error.No New Process is Created.\n");
	}
}
