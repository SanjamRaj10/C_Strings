/*
---------------------------------------------------------------------------------------------------------
Scrivere un programma che calcola la lunghezza di una stringa di N caratteri (stdin) senza 
usare le funzioni di libreria. 

(Suggerimento: poiché una stringa è un vettore di caratteri terminato 
dal valore ‘\0’ bisogna contare i valori presenti nel vettore, incrementando l’indice, finchè non si 
trova ‘\0’).
----------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
int main(void){
	
	// SI INSERISCE LA DIMENSIONE MASSIMA DELLA STRINGA
	int N;
	printf("Inserisci la Dimensione Massima della Stringa: ");
	scanf("%d",&N);
	
	// SI INSERISCE IL CONTENUTO DELLA STRINGA
    char Stringa[N];
    printf("\nInserisci la Stringa: ");
    do{
    	scanf("%s",Stringa);  
		if()  	
	}while()

	
	// SI STAMPA LA STRINGA INSERITA
	printf("\nLa Stringa inserita e': %s",Stringa);
	
	// CALCOLO LA LUNGHEZZA DELLA STRINGA
	int i=0;
	do{
		i++;
	}while(Stringa[i]!='\0');
	
	// STAMPO LA LUNGHEZZA DELLA STRINGA
	printf("\nLunghezza Stringa: %d",i);	
}