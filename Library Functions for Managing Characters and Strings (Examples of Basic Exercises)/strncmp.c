#include <stdio.h>
#include <string.h>

int main(void){
    int i;
    int ris;
    
    char saluto1[] = "Ciao Mario";
    char saluto2[] = "Ciao Pippo";

    // Compariamo una parte della Stringa contenuta nel 1°Vettore con con una parte del 2°Vettore
       
    // strncmp(stringa1, stringa2, primi n caratteri);
    ris = strncmp(saluto2,saluto1, 5);
    
    if (ris == 0)
        printf("Sono Uguali");
    else 
        printf("Sono Diversi");
}
