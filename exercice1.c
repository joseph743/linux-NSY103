#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main (){

pid_t pid_fils, mon_pid, pid_pere;
pid_fils=fork();

if(pid_fils==-1)
	printf("erreur de fork");
else
	if (pid_fils==0)
		{mon_pid=getpid();
		pid_pere=getppid();
		printf("I am the son , my pid is %d\n",mon_pid);
		printf("My father's pid is %d\n",pid_pere);
		}
	else
		{mon_pid=getpid();
		printf("I am the father , my pid is %d\n",mon_pid);
		printf("my son's pid is %d\n",pid_fils);
		}
return 0;

}









