#include<unistd.h>
#include<stdio.h>
int main()
{
	printf("\n exec system call");
	printf("Displaying the date");
	execlp("/bin/date","date",0);
}
