#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char** argv) {
  char comando[256];
  pid_t pid;
  while (1) {
    printf("> ");
    gets(comando);
    if (strncmp(comando,"exit",4) == 0) {
      break;
    }
    pid = fork();
    if (pid != 0) {
      wait(NULL);
    } else {
      if (strcmp(comando,"dir") == 0) {
        // listar el contenido de archivos en ese directorio
        printf("debo listar archivos\n");
      } else if (strcmp(comando, "clear") == 0) {
        // limpiar pantalla
        printf("debo limpiar pantalla\n");
      } else {
        //strtok
        //revisar alguna variante de exec
        //exec(comando);
      }
    }
  }
  exit(0);
}
