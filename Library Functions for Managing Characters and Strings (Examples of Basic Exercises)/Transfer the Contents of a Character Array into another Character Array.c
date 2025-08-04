#include <stdio.h>

int main(void){
    int i;
    
    char saluto[] = "Ciao, come stai?";
    char byebye[30];
    
    for(i=0; saluto[i]!='\0'; i++){
        byebye[i]=saluto[i];
    }
    byebye[i]='\0';
       
    printf("%s", byebye);

}
