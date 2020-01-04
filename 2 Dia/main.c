#include <stdio.h>
#include <string.h>


int main (int *argc, char *argv[] ){

    char buffer[256];

    printf("Ingresa tu nombre y preciona <Enter>:\n ");
    gets(buffer);

    printf("\nTu nombre tiene %d caracteres y espacios!", strlen(buffer));

    return 0;
}
