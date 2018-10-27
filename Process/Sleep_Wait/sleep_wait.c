#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdio.h>
int main()
{
	 pid_t p=fork();
	if(p==0)
	{
		sleep(2);
		printf("Hi from child \n");	
	}
	else
	{
		printf("Hi from Parent \n");
		wait(NULL);
		printf("Child terminated \n");		
	}
	return 0; 
}

/* if in the same program if wait(NULL) is removed then the child becomes 
orphan and is allocated to process id*/ 
