#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	char buff[50];
	int m;
	printf("\nWAP a C program to write into a named pipe (fifo pipe)and then read from it and display on the screen\n");
	m=open("p4",O_RDONLY);
	int r=read(m,buff,50);
	printf("\nTotal bytes to read is %d\n",r);
	printf("\n %s is the Message\n",buff);
	printf("\n Reading message from pipe finished Process no %d\n ",getpid());
}

