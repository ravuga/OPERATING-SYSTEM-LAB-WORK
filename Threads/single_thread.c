#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

void *message()
{
	printf("\n Hello Sir How are You? \n");
}

int main()
{
	pthread_t g;
	pthread_create(&g,NULL,message,NULL);
	printf("\n Thread Intialised \n ");
	pthread_join(g,NULL);
}
