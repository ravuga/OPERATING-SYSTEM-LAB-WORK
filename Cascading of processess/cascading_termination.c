#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	pid_t p1;
	pid_t p2;

	p1 = fork();

	if(p1 == 0) {
		int parent = getppid();
		printf("process with id %d and parent %d\n", getpid(), getppid());
		sleep(3);
		if(parent != getppid()) {
			printf("Leaving as an orphan with pid %d\n", getpid());
			exit(0);
		}
	}
	else {
		p2 = fork();
		if(p2 == 0) {
			int parent = getppid();
			printf("process with id %d and parent %d\n", getpid(), getppid());
			sleep(2);
			if(parent != getppid()) {
				printf("Leaving as an orphan with pid %d\n", getpid());
				exit(0);
			}
		}
		else {
			printf("Process with id %d and children %d and %d\n", getpid(), p1, p2);
		}
	}
}
