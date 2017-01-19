#include <stdio.h>
#include <unistd.h>

void main(int argc, char * argv[]){
	if (argc < 2) {
		printf("args less than 2,pls check\n");
		return;
	}
	int ret = -1;
	ret = access(argv[1], F_OK);
	if (0 == ret ){
		printf("%s is exist\n", argv[1]);
	}
	else{
		printf("%s is not exist\n", argv[1]);
	}
	int ret1 = -1;
	ret1 = access(argv[1], R_OK);
	if (0 == ret1 ){
		printf("%s is readable\n", argv[1]);
	}
	else{
		printf("%s is not readable\n", argv[1]);
	}
	int ret2 = -1;
	ret2 = access(argv[1], W_OK);
	if (0 == ret2 ){
		printf("%s is writeable\n", argv[1]);
	}
	else{
		printf("%s is not writeable\n", argv[1]);
	}
	int ret3 = -1;
	ret3 = access(argv[1], X_OK);
	if (0 == ret3 ){
		printf("%s is Excuteable\n", argv[1]);
	}
	else{
		printf("%s is not Excuteable\n", argv[1]);
	}
}


