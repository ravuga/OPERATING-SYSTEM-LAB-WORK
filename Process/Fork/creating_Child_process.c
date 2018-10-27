#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	printf("I am %d Parent process \n",getpid());
	pid_t p=fork();
	printf("Fork return %d \n ", p);
}
