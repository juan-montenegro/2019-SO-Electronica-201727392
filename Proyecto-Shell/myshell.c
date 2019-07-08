
OS-Spring2019-Electronica-Log
Documentos de Google

Anuncio: "Les comparto un ejemplo de lo que…"
john alexander sanabria ordonez
Fecha de creación: 2 jul.2 jul.
Les comparto un ejemplo de lo que podría ser el shell. Compila y corre PERO está incompleto.

myshell.c
C

Publicado por JUAN ESTEBAN CORREA OROZCO
JUAN ESTEBAN CORREA OROZCO
Fecha de creación: 26 jun.26 jun.
Compañeros quería saber si, hay algún grupo que le falte un integrante?? O alguna persona que esté sin grupo?
Tarea: "Tarea de programación"
john alexander sanabria ordonez ha publicado una nueva tarea: Tarea de programación
Fecha de creación: 20 jun.20 jun. (Última modificación: 5 jul.)

Anuncio: "Por favor crear una cuenta e ingresar a…"
john alexander sanabria ordonez
Fecha de creación: 17 jun.17 jun.
Por favor crear una cuenta e ingresar a la plataforma EdPuzzle con su cuenta de correo institucional. Una vez tenga creada su cuenta por favor seguir este enlace. Deberán ver los videos que allí se dejaron.

Edpuzzle
https://edpuzzle.com/join/fepipce

Anuncio: "El día de hoy no podré tener atención…"
john alexander sanabria ordonez
Fecha de creación: 17 jun.17 jun.
El día de hoy no podré tener atención de estudiantes pues estoy en Claustro de profesores. Si alguien desea alguna asesoría la deberiamos programar. Por favor enviarme un correo john.sanabria@correounivalle.edu.co
Tarea: "Tarea de Programación en C."
john alexander sanabria ordonez ha publicado una nueva tarea: Tarea de Programación en C.
Fecha de creación: 10 jun.10 jun.

Anuncio: "Saludos, Para la próxima clase traer…"
john alexander sanabria ordonez
Fecha de creación: 8 jun.8 jun.
Saludos,

Para la próxima clase traer prepara la lectura en el enlace anexo.

Enlace
http://pages.cs.wisc.edu/~remzi/OSTEP/cpu-api.pdf

Anuncio: "En el archivo de la clase de hoy se…"
john alexander sanabria ordonez
Fecha de creación: 30 may.30 may.
En el archivo de la clase de hoy se pueden encontrar los comandos que se usaron para clonar los repositorios, sección 'Revisión de Códigos'.

OSTEP-Lecture-02
Documentos de Google
Pregunta: "¿Cómo siente que va el ritmo de la clase?"
john alexander sanabria ordonez ha publicado una nueva pregunta: ¿Cómo siente que va el ritmo de la clase?
Fecha de creación: 30 may.30 may.

Anuncio: "Para los que tengan problemas aún con…"
john alexander sanabria ordonez
Fecha de creación: 27 may.27 may.
Para los que tengan problemas aún con lo de su repositorio les comparto este documento que les puede servir de guía.

GitBasico
Documentos de Google
Tarea: "Crear su primer repositorio en GitHub"
john alexander sanabria ordonez ha publicado una nueva tarea: Crear su primer repositorio en GitHub
Fecha de creación: 23 may.23 may.

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
