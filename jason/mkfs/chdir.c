#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define SIZE 100

void main(){
	const char * path="/home";
	const char * path1="/home/asdv";
	char * ptr;
	ptr = malloc(SIZE);
	char buf[SIZE];

	if(getcwd(buf, SIZE) == NULL){
		perror("getcwd"); 	
		exit(1);
	}
	printf("before change pwd , cwd = %s\n", buf);


	if(getcwd(ptr, SIZE) == NULL){
		perror("getcwd"); 	
		exit(1);
	}
	printf("before change pwd , cwd = %s\n", ptr);

	if ( -1 == chdir(path) ) {
		perror("chdir failed");
		exit(1);
	}
#if 0	
	if ( -1 == chdir(path1) ) {
		perror("chdir path1 failed");
		exit(1);
	}
#endif

	if(getcwd(ptr, SIZE) == NULL){
		perror("getcwd"); 	
		exit(1);
	}
	printf("after change pwd , cwd = %s\n", ptr);
	return;

}

