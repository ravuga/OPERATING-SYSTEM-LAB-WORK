#include<stdio.h>
#include<fcntl.h>
int main()
{
	int fd,n;
	char buff[250];
	printf("Write Something to this file \n");
	n=read(0,buff,n);
	fd=open("text.txt",O_APPEND|O_RDWR);
	printf("\nfile descriptor is %d \n",fd);
	write(fd,buff,n);
	printf("File updated.\n");
}
