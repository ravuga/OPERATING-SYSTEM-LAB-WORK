#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
	pid_t child_pid;
	/*Creating Child Process*/
	child_pid=fork();
	if(child_pid==0)
	{
		exit(0);
		/*This is Child process.Exit Immediately*/
	}
	else
	{
		sleep(5);
		/*This is Parent process sleeping*/
		system("ps -eo pid,ppid,stat,cmd");
	}
	return 0;
}
