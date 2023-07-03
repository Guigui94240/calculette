# include <stdio.h>
# include "operations.h"

int main(){
    int chiffre1;
    int chiffre2;
    char operateur;
    printf( "entrez un  chiffre\n");
    scanf("%d",&chiffre1);
    printf ( "entrez un opérateur * / + - ?\n");
    scanf(" %c",&operateur);
    printf("o:%c",operateur);
    printf("\n");
    printf( "entrez un autre chiffre chiffre\n");
    scanf("%d",&chiffre2);

    if ( operateur == '+'){
        printf("\nle resulta est :%d\n",addition (chiffre1,chiffre2));
    }
    if ( operateur == '-'){
        printf("\nle resulta est :%d\n",soustraction (chiffre1,chiffre2));
    }
    if ( operateur == '*'){
        printf("\nle resulta est :%d\n",multiplication (chiffre1,chiffre2));
    }
    if ( operateur == '/'){
        printf("\nle resultat est :%.2f\n",division(chiffre1,chiffre2));
    }
return 0;

}