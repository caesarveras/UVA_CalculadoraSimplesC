//CALCULADORA AVA1 CAESAR VERAS SOUTO DE LIMA
#include <stdio.h>
#include <stdlib.h>

int main(int argc,  char  *argv[ ]){

       int op;
       float n1, n2, res;

    printf("digite '1' p/ somar ; \n") ;
    printf("digite '2' p/ subtrair ; \n") ;
    printf("digite '3' p/ multiplicar ; \n") ;
    printf("digite '4' p/ dividir ; \n") ;
    scanf("%d" , &op) ;

    printf("Insira o primeiro numero: \n") ;
    scanf("%f" , &n1) ;
    printf("Insira o segundo numero: \n") ;
    scanf("%f" , &n2) ;

    if(op  ==  1 ) {
            res  =  n1 + n2 ;
            printf("Resultado soma:  %f. \n" ,   res);
    }
    
    if(op  ==  2 ) {
        res  =  n1 - n2 ;
            printf("Resultado subtração:  %f. \n" ,   res);
    }
    
    if(op  ==  3 ){
        res  =  n1  *  n2 ;
        printf("Resultado multiplicação :  %f . \n" , res) ;
    }
    
    if(op  ==  4 ){
        res  =  n1  /  n2 ;
        printf("Resultado divisão:   %f . \n" , res);
    }
    
    return 0; 
    
    
}
