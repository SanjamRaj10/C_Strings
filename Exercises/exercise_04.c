/*
------------------------------------------------------------------------
Leggere dalla console (stdin) due stringhe di lunghezza massima 
e stampare la loro concatenazione a video (stdout).
------------------------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>
int main(void){
	
	// SI INSERISCE LA DIMENISONE MASSIMA DELLA STRINGA A
	int N;
	printf("Inserisci la Dimensione Massima della Stringa A: ");
    scanf("%d",&N);
	
	// SI INSERISCE LA DIMENISONE MASSIMA DELLA STRINGA B
	int M;
	printf("Inserisci la Dimensione Massima della Stringa B: ");
	scanf("%d",&M);	
	
	
	// SI INSERISCE IL CONTENUTO DELLA STRINGA A
	char StringaA[N];
	printf("\nInserisci Stringa A: ");
	do{
		scanf("%s",StringaA);
		if(strlen(StringaA)>N){
			printf("\nErrore! Il Valore e' Troppo Grande. \nInserire un valore minore di %d: ",N);
		}
	} while (strlen(StringaA)>N);
	
	// SI INSERISCE IL CONTENUTO DELLA STRINGA B
	char StringaB[M];
	printf("\nInserisci Stringa B: ");
	do{
		scanf("%s",StringaB);
		if(strlen(StringaB)>M){
			printf("\nErrore! Il Valore e' Troppo Grande. \nInserire un valore minore di %d: ",M);
		}
	} while (strlen(StringaB)>M);
	
	
	// SI STAMPA LA STRINGA A INSERITA
	printf("\nLa Stringa A inserita e': %s",StringaA);
	
	// SI STAMPA LA STRINGA B INSERITA
	printf("\nLa Stringa B inserita e': %s",StringaB);	
	
		
	// SI CALCOLA LA LUNGHEZZA DELLA STRINGA A
	int lenStringaA = strlen(StringaA);
	
	// SI CALCOLA LA LUNGHEZZA DELLA STRINGA B
	int lenStringaB = strlen(StringaB);	
	
	
    // SI STAMPA LA LUNGHEZZA DELLA STRINGA A
    printf("\n\nLa Lunghezza della Stringa A e': %d",lenStringaA);
    
    // SI STAMPA LA LUNGHEZZA DELLA STRINGA B
    printf("\nLa Lunghezza della Stringa B e': %d",lenStringaB);

    
    // SI COMPATTA STRINGA A CON STRINGA B
    char StringaC[lenStringaA+lenStringaB];
        
	// strncpy(destinazione, origine, numero di caratteri da copiare);
    strcpy(StringaC, StringaA);
    
    // strcat(destinazione, origine);   
    strcat(StringaC, StringaB);
    
    printf("\n\nLa Stringa C sara': %s",StringaC);

}
