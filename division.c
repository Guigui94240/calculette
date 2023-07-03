#include <stdio.h>
#include "operations.h"

float division (float chiffre1, float chiffre2){

    float result;
    if (chiffre2!=0){
        result = chiffre1 / chiffre2;
    }else{
        printf("Vous ne pouvez pas divisez par ZERO noob!");
        return 0;
        }

    return result;

}