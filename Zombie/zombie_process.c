//Once the child is terminated all data is fetched from process table by the 
//parent

#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdio.h>
int main()
{
	pid_t p=fork();
	if(p==0)
	{
		printf("Child Created \n");
		printf("Id of Child Process is %d",getpid());	
		//exit(0);	
	}
	else
	{
		printf("Id of Parent Process is %d",getpid());
		sleep(300);	
	}
	return 0; 
}

