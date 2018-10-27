#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/types.h>	
#include<pthread.h>

int key = 15;
void *f1()
{	
	int x;
	x=key;
	x++;
	printf("\nVALUE OF X IS %d\n",x);
	sleep(2);
}

void *f2()
{
	int y;
	y=key;
	y++;
	printf("\nVALUE OF Y IS %d\n",y);
	sleep(2);	
}

int main()
{
	printf("\n Value of key is %d\n",key);	
	pthread_t p1;
	pthread_t p2;
	pthread_create(&p1,NULL,f1,NULL);
	pthread_create(&p2,NULL,f2,NULL);
	pthread_join(p1,NULL);
	pthread_join(p2,NULL);
}
