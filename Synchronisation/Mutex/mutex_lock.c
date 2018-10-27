#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/types.h>	
#include<pthread.h>

pthread_mutex_t l;

void *f1()
{	
	pthread_mutex_lock(&l);
	int buff;
	printf("Enter a Number ");	
	scanf("%d",&buff);	
	if(buff%2==0)
	    printf("Number is Even \n");
	else 
	    printf("Number is Odd \n");
	pthread_mutex_unlock(&l);
}

void *f2()
{
	pthread_mutex_lock(&l);
	char buff1;
	printf("\nEnter a Alphabet ");	
	scanf("%c",&buff1);	
	if(buff1=='a'||buff1=='e'||buff1=='i'||buff1=='o'||buff1=='u')
		printf("It's a vowel \n");
	else
		printf("It's a consonant \n");
	pthread_mutex_unlock(&l);
}

int main()
{
	pthread_t p1;
	pthread_t p2;
	pthread_create(&p1,NULL,f1,NULL);
	pthread_join(p1,NULL);
	pthread_create(&p2,NULL,f2,NULL);	
	pthread_join(p2,NULL);
}
