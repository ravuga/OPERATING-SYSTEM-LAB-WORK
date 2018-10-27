#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
#include<stdio.h>
int main()
{
	char b[100];
	int i=open("text.txt",O_RDONLY,0777);
	lseek(i,11,SEEK_SET);
	read(i,b,51);
	write(1,b,35);
	printf("\n \n");
}
