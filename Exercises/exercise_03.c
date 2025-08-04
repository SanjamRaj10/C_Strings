/*
----------------------------------------------------------------------------------------------------------------------------------------
Scrivere un programma che legge una stringa di N caratteri e scambia il primo 
carattere con l’ultimo (es: "Fondamenti" diventa " iondamentF"). 
 
(Suggerimento: utilizzare la funzione di libreria strlen(s), dove s è un vettore di caratteri, che restituisce la lunghezza della 
stringa e trattare la stringa come vettore per scrivere i carattere nella posizione 
richiesta, s[0] è il primo carattere, s[1] è il secondo carattere, …)
----------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>
int main(void){
	
	// SI INSERISCE LA DIMENSIONE MASSSIMA DELLA STRINGA
	int N;
	printf("Inserisci la Dimensione Massima della Stringa: ");
	scanf("%d",&N);
	
	// SI INSERISCE IL CONTENUTO DELLA STRINGA 
	char Stringa[N];
	printf("\nInserisci una Stringa: ");
	
	do{
		scanf("%s",Stringa);
		if(strlen(Stringa)>N) 
			printf("\nErrore! Stringa troppo grande. \nInserire una stringa di massimo %d caratteri: ", N);
	} while(strlen(Stringa)>N);
	
	// SI STAMPA LA STRINGA INSERITA
	printf("\nLa Stringa inserita e' %s",Stringa);
    
    // CALCOLO LA LUNGHEZZA DELLA STRINGA
    int lenStringa = strlen(Stringa);
	
	// STAMPO LA LUNGHEZZA DELLA STRINGA
    printf("\nLa Lunghezza della Stringa e': %d",lenStringa);
    
    // INVERTO IL CARATTERE INIZIALE CON QUELLO FINALE
    int i;
    char Temp;
    Temp = Stringa[0];
    Stringa[0] = Stringa[lenStringa-1];
    Stringa[lenStringa-1] = Temp;

	printf("\nLa Stringa Modificata e': %s",Stringa);
}


