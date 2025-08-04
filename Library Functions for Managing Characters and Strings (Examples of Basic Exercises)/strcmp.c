#include <stdio.h>
#include <string.h>

int main(void){
    int i;
    int lenSaluto1;
    int lenSaluto2;
    int ris;
    
    char saluto1[] = "ciao";
    char saluto2[] = "Ciao";

    // Compariamo l'intera Stringa contenuta nel 1°Vettore con l'intera Stringa del 2°Vettore
    ris = strcmp(saluto2,saluto1);
    
    if (ris == 0)
        printf("Sono Uguali");
    else 
        printf("Sono Diversi");

}
