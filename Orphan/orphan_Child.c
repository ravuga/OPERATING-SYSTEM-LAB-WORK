// Parent Terminated while The Child is Sleeping

#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdio.h>
int main()
{
	 pid_t p=fork();
	if(p==0)
	{
		sleep(10);
		printf("Child Created \n");
		printf("Id of Parent Process is %d",getppid());	
	}
	else
	{
		printf("Hi from Parent \n");		
	}
	return 0; 
}

