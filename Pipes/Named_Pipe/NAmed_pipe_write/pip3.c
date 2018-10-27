/*
 5th April 2018
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int n;
	printf("\nWAP a C program to write into a named file (fifo pipe)\n");
	mkfifo("p2",0777);
	printf("\n p2 Named Pipe is created\n");	
	n=open("p2",O_WRONLY);
	write(n,"Bonjour Gaurav",14);
	printf("\n\nProcess %d finished\n\n",getpid());
}

// gcc -o 7 pip3.c
