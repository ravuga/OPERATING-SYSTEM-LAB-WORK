/* 5th April 2018 */
#include<stdio.h>
#include<unistd.h>

int main()
{
	int n,fd[2];
	char buffer[100];
	printf("\n WAC Program to send a message from the parent process to child process using unamed pipe.\n");
	pipe(fd);
	pid_t p;
	p=fork();
	if(p>0)
	{
		close(fd[0]); //Reading End is closed
		printf("\n Message is sent to child.\n");
		write(fd[1],"Aur Bhai KAisa Hai",18);
		wait();
	}else
	{
		close(fd[1]); //Writing End is closed
		printf("\n!!!!!One Message Recieved!!!!!\n\n");
		n=read(fd[0],buffer,20);
		write(1,buffer,n);
		printf("\n \n");
	}	
}
