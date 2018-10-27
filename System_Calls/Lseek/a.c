#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
#include<stdio.h>
int main()
{
	char b[100];
	int i=open("text.txt",O_RDONLY,0777);
	lseek(i,-10,SEEK_END);
	read(i,b,16);
	write(1,b,16);
	printf("\n \n");
}
