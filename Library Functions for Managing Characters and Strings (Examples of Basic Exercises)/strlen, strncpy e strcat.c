#include <stdio.h>
#include <string.h>

int main(void){
    int i;
    int lenSaluto1;
    int lenSaluto2;
    char saluto1[] = "Ciao come stai ";
    char saluto2[] = "Io sto molto bene. ";
    char saluto3[] = "Ora vado a scuola";
    char saluto4[90];
    
    // Lunghezza di una Stringa
    lenSaluto1 = strlen(saluto1);

    // strncpy(destinazione, origine, numero di caratteri da copiare);
    strncpy(saluto4, saluto1, lenSaluto1);
    
    // strcat(destinazione, origine);
    strcat(saluto4,saluto2);
    strcat(saluto4,saluto3);
    
    printf("%s", saluto4);


}
