#include <stdio.h>
int main(void){
	char s[]="questa DOVREBBE essere UNA PROVA di STRINGA";
	int i=0;
	int ContaMaiuscole = 0;
	
	while (s[i]!='\0'){
		if (s[i]>='A' && s[i]<='Z')	{
			ContaMaiuscole++;
		}
	    i++;  
	}
	printf("%d",ContaMaiuscole);
}