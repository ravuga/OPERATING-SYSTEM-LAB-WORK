#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	printf("I am %d Current process \n",getpid());
	printf("I am %d Parent process \n",getppid());
}
