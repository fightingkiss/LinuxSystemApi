/*
 * fork_test.c
 * version 1
 * create on 16/12/19
 *    Author jason huang
 */

#include<unistd.h>
#include<stdio.h>
int main()
{
	pid_t fpid;	
	int count = 0;

	fpid = fork();

	if (fpid < 0){
		printf("error in fork! \n");
	}
	else if(fpid == 0){
		printf("i am child process, my process id is %d \n", getpid());
		count ++;
	}
	else{
		printf("i am parent process, my process id is %d \n", getpid());
		count ++;
	}
	printf("count is %d \n", count);
	return 0;
}

