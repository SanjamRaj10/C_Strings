#include <stdio.h>
#include <ctype.h>

int main(void){
    char var1 = 'A';
    char var2 = 'a';

    if (var1 == toupper(var2))
        printf("Sono Uguali\n");
    else 
        printf("Sono Diversi\n");

    printf("%c\n",var2);
    
    if (var2 == tolower(var1))
        printf("Sono Uguali\n");
    else 
        printf("Sono Diversi\n");

    printf("%c",var1);
    
}
