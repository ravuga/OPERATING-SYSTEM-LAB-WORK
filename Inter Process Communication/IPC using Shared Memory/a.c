/*
This program creates a shared memory segment, attaches itself to it and then
writes some content into the shared memory segment.
*/
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<sys/shm.h>
int main()
{
	int i;
	void *shared_memory;
	char buff[100];
	int shmid;
	shmid=shmget((key_t)2345,1000,0666|IPC_CREAT);
	printf("Key of shared memory is %d\n",shmid);
	shared_memory=shmat(shmid,NULL,0);
	printf("Process attached at %X\n",(int)shared_memory);
	printf("Enter some data to write to shared memory\n");
	read(0,buff,100);
	strcpy(shared_memory,buff);
	printf("You wrote : %s\n",shared_memory);
}
