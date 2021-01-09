#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 1000
#define PATH "/mnt/c/Users/ottof/Documents/codigos/libs_c"

void printError(){
	printf("Error! This function should receive the name of the lib from ~/.mylibs/C_C++ as argument!\n");
	printf("Aborting...\n");
}

void printLenError(){
	printf("Your has a long name! For security purpose, the program won't continue!\n");
	printf("Aborting...\n");
}

int main(int argc, char * argv[]){

	if(argc != 2){
		printError();
		exit(1);
	}
	
	int libLen = strlen(argv[1]);
	if(libLen >= MAX_LEN){
		printLenError();
		exit(1);
	}

	char command[2048];
	sprintf(command, "cp -t . %s/%s/%s.c %s/%s/%s.h", PATH, argv[1], argv[1], PATH, argv[1], argv[1]);
	system(command);

	return 0;
	

}
