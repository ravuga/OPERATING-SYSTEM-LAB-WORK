#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/types.h>	
#include<pthread.h>
#include<semaphore.h>
sem_t p;

void *f1()
{	
	sem_wait(&p);
		int buff;
	printf("Enter a Number ");	
	scanf("%d",&buff);	
	if(buff%2==0)
		printf("Number is Even \n");
	else
		printf("Number is Odd \n");
	sem_post(&p);
}

void *f2()
{
	sem_wait(&p);
	char buff1;
	printf("Enter a Alphabet ");	
	scanf("%c",&buff1);	
	if(buff1=='a'||buff1=='e'||buff1=='i'||buff1=='o'||buff1=='u')
		printf("It's a vowel \n");
	else
		printf("It's a consonant \n");
	sem_post(&p);
}

void *f3()
{	
	sem_wait(&p);
	int fd,count;
	fd=open("reader.txt",O_RDONLY);
	void *buff=(char*)(malloc(1000));
	count=read(fd,buff,1000);
	printf("\nContent of file is %d characters \n",count);
	write(1,buff,count);
	close(fd);
	sem_post(&p);
}

int main()
{
	printf("\nQuestion: Write a C program in which three threads are created. 1st thread will take integer value as input from user and check and display is the number even or odd. 2nd thread will take a alphabet and check whether it's a vowel or a consonant.3rd will read no. of characters in the file and display it on screen.\n");
	sem_init(&p,0,1);
	pthread_t p1;
	pthread_t p2;
	pthread_t p3;
	pthread_create(&p1,NULL,f1,NULL);
	pthread_create(&p2,NULL,f2,NULL);
	pthread_create(&p3,NULL,f3,NULL);
	pthread_join(p1,NULL);
	pthread_join(p2,NULL);
	pthread_join(p3,NULL);
}
