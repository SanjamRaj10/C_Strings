/*
---------------------------------------------------------------------------------------------------------
Scrivere un programma che, data una stringa di N caratteri, la inverta (es: "Fondamenti" diventa "itnemadnoF")
Modificare il programma inserendo una stringa da console (stdin) la cui lunghezza è 
minore di 20 caratteri. Stampare il risultato (stdout) a video. Per leggere la stringa usare 
la funzione scanf(“%s”, s) dove s è un vettore di caratteri.
----------------------------------------------------------------------------------------------------------
*/
	
#include <stdio.h>
int main(void){
 
    // SI INSERIRISCE LA DIMENSIONE DELLA STRINGA
    int N;
    printf("Inserisci la Dimensione (minore di 20) della Stringa: ");
    do{
        scanf("%d",&N);
        if(N>20){
        printf("Errore! Il Valore e' MAGGIORE di 20. Inserire un altro Valore: ");
        }
    } while (N>20);
 
    // SI INSERISCE IL CONTENUTO ALL'INTERNO DELLA STRINGA ORDINATA
    char StringaOrdinata[N-1];
    int i;

    printf("\nInserisci una Stringa: ");
    scanf("%s",StringaOrdinata);
    
    // SI STAMPA LA STRINGA ORDINATA
    printf("\nLa Stringa Ordinata e': %s",StringaOrdinata);
    
    
    // SI INSERISCE IL CONTENUTO ALL'INTERNO DELLA STRINGA INVERSA
    char StringaInversa[N-1];
    int k = 0;
    for(i=N-1; i>=0; i--){
        StringaInversa[k] = StringaOrdinata[i];
        k++;
    }
    StringaInversa[k]='\0';
 
    // SI STAMPA LA STRINGA INVERSA
    printf("\nLa Stringa Inversa e': %s",StringaInversa); 
}
	
