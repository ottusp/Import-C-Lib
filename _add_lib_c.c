#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 1000

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
	sprintf(command, "cp -t . ~/.mylibs/C_C++/%s/%s.c ~/.mylibs/C_C++/%s/%s.h", argv[1], argv[1], argv[1], argv[1]);
	system(command);

	return 0;
	

}
