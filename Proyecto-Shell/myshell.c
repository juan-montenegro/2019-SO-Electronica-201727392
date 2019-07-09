#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <readline/readline.h>
#include <readline/history.h>

#define MAXCHAR 1000 // Numero maximo de caracteres soportados
#define MAXCMND 100 // Numero maximo de comando sopartos

#define clear() printf("\033[H\033[J")

int clr(void){
	clear();
}

int commands(){

}
int initScreen(void){
	clr();
	printf("Bienvenido a su terminal\n");
	printf("Presione ENTER para continuar\n");
  while (c = getchar() !='\n');
	sleep(1);
	clr();
}

/// Funcion para recibir entrada del usuario
int userInput(char* str){
    char* uInput;

    uInput = readline("\n-> ");
    if (strlen(uInput) != 0) {
        add_history(uInput);
        strcpy(str, uInput);
        return 0;
    } else {
        return 1;
    }
}

int main(int argc, char** argv) {
	initScreen();
}
