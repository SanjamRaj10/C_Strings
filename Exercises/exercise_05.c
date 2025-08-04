/*
------------------------------------------------------------------------------------------------------------------
Leggere una stringa di lunghezza massima da console (stdin) e stampare a video (stdout) il numero di ‘a’ presenti. 
(Suggerimento: confrontare ogni carattere con il carattere ‘a’ e contare il numero di occorrenze)
------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>
int main(void){
	
	// SI INSERISCE LA DIMENSIONE MASSIMA DELLA STRINGA
	int N;
	printf("Inserisci la Dimensione Massima della Stringa: ");
	scanf("%d",&N);
	
	// SI INSERISCE IL CONTENUTO DELLA STRINGA
	char Stringa[N];
	printf("\nInserisci Stringa: ");
	scanf("%s",Stringa);
	
	// SI STAMPA IL CONTENUTO DELLA STRINGA
	printf("\nLa Stringa inserita e': %s",Stringa);
	
	// SI CALCOLA LA LUNGHEZZA DELLA STRINGA 
	int lenStringa = strlen(Stringa);
	
	// SI STAMPA LA LUNGHEZZA DELLA STRINGA
	printf("\n\nLa Lunghezza della Stringa e': %d",lenStringa);
	
	
	// SI CERCA IL NUMERO DI OCCORRENZE
	int i;
	int Cont=0;
	for(i=0; i<lenStringa; i++){
		if(Stringa[i]=='a'){
			Cont++;
		}
	}
	
	// SI STAMPA IL NUMERO DI OCCORRENZE
	printf("\n\nIl Numero di Occorrenze e': %d volta/e",Cont);
	
}

