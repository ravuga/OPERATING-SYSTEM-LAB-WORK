#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	char buff[50];
	int n;
	mkfifo("p4",0777);
	printf("\n p4 Named Pipe is created\n");	
	n=open("p4",O_WRONLY);
	write(n,"'Bonjour Gaurav'",16);
	printf("\n\nWriting into pipe p4 finished Process no %d \n\n",getpid());
}

