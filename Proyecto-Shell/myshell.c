#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAXCHAR 1000 // Numero maximo de caracteres soportados
#define MAXCMND 100 // Numero maximo de comando sopartos

#define clear() printf("\033[H\033[J")

int initScreen(void){
	clear();
	int c;
	printf("Bienvenido a su terminal\n");
	printf("Presione ENTER para continuar\n");
  	while (c = getchar() !='\n'){
		clear();
		printf("Bienvenido a su terminal\n");
		printf("Presione ENTER para continuar\n");
	}
	clear();
	sleep(1);
}

int newLine(void) { 
    char cwd[256]; 
    getcwd(cwd, sizeof(cwd)); 
	clear();
    printf("\nShell= %s", cwd); 
}

int newLine(void) { 
    char cwd[256]; 
    getcwd(cwd, sizeof(cwd)); 
	clear();
    printf("\nShell= %s", cwd); 
}

int currentDir (char** cDir){
	DIR *dp;
	struct dirent *ep;
	
	dp = opendir (cDir);
	if (dp != NULL){
		while (ep = readdir (dp))
		puts (ep->d_name);
    	(void) closedir (dp);
    }
	else
    	printf("Directorio no válido");
  		return 0;
}

int commandAdmin(char** parsed){
	int commandNumber = 8;
	int i;
	int argSearch = 0;
	char* commandList[commandNumber];
	commandList[0] = "cd";
	commandList[1] = "clr";
	commandList[2] = "dir";
	commandList[3] = "environ";
	commandList[4] = "echo";
	commandList[5] = "help";
	commandList[6] = "pause";
	commandList[7] = "quit";

	for (i = 0; i < commandNumber; i++){
		if (strcmp(parsed[0]) = commandList[i] == 0){
			argSearch = i + 1;
			break;
		}	
	}
	switch (argSearch){
		case 1:
			chdir(parsed[1]);
			return 1;
		case 2:
			newLine();
			return 1;
		case 3:
			currentDir(parsed[1]);
			return 1;
		case 4:

		case 5:

		case 6:

		case 7:

		case 8:
			printf("Saliendo del terminal\n");
			sleep(1);
			exit(0);
		default:
			break;
	}
	return 0;
}

int main(int argc, char** argv) {
	initScreen();
	while (1){
		break;
	}
}