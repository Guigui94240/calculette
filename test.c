#include <stdio.h>
#include "operations.h"


void testdiv(){
    float result;
    result=division(4,2);
    if (result==2 )
        printf("ok test1 div\n");
    result=division(9,4);
    if (result==2.25)
        printf("ok test2 div \n");
    result=division(2,0);
    if (result==0)
        printf("ok test3 div\n");
}


void testadd(){
    int result;
    result=addition(4,2);
    if (result==6 )
        printf("ok test1 addition\n");
    result=addition(9,4);
    if (result==13)
        printf("ok test2 addition\n");
    result=addition(2,0);
    if (result==2)
        printf("ok test3 addition\n");
}

void testsous(){
    int result;
    result=soustraction(4,2);
    if (result==2)
        printf("ok test1 soustraction\n");
    result=soustraction(9,4);
    if (result==5)
        printf("ok test2 soustraction\n");
    result=addition(2,0);
    if (result==2)
        printf("ok test3 soustraction\n");
}

void testmulti(){
    int result;
    result=multiplication(4,2);
    if (result==2)
        printf("ok test1 multiplication\n");
    result=multiplication(9,4);
    if (result==5)
        printf("ok test2 multiplication\n");
    result=multiplication(2,0);
    if (result==0)
        printf("ok test3 multiplication\n");
}

int main (){

    testmulti();
    testadd ();
    testdiv();
    testsous();
}