#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char comp1[40], comp2[40];
    int comp;

    do{  
        printf("qual a capital do Amazonas?\n");
        scanf("%s", comp1);
    
        strcpy(comp2, "Manaus");

        comp = strcmp(comp1, comp2);
        
    } while (comp != 0);

    printf("parabens acertou.");
    
    return 0; 
}

