#include<stdio.h>
int main()
{
	int n;
	char buff[50];
	write(1,"Welcome to OS_101",13);
	printf("\nWrite Something\n");
	n=read(0,buff,50);	
	printf("\nU Wrote the following \n ");	
	write(1,buff,n);
	printf("\n Total characters are %d \n",n); 
}
