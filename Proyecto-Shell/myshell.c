#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
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

int currentDir(void) { 
    char cwd[256]; 
    getcwd(cwd, sizeof(cwd)); 
    printf("\nShell= %s", cwd); 
} 

int cmd

int main(int argc, char** argv) {
	initScreen();
	while (1){

	}
}