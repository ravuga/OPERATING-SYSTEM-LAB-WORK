/* 5th April 2018 */
#include<stdio.h>
#include<unistd.h>

int main()
{
	printf("\n WAC Program to send a message from the parent process to child process using Named pipe.\n");
	mkfifo("p1",0777);
	printf("\n p1 Named Pipe is created\n");	
}
