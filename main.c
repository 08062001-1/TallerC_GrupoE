/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: usuario
 *
 * Created on 4 de abril de 2020, 11:22 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void calculateMCD(int less, int higher){

}

void calcFibonacci(){
    printf("Calcular termino de la serie Fibonacci\nENTER para Continuar");
    getchar();
}

void calcMCM(){
    printf("Calcular Maximo Comun Divisor\nENTER para continuar");
    getchar();
}

void calcCousin(){
    printf("Calcular números Primos\nENTER para continuar");
    getchar();
}


void mainMenu() {
    char option;
    
    char *mainMenu= "\n****MENÚ PRINCIPAL****\n\n"
    "1. Serie de Fibonaci\n"
    "2. Maximo Común Divisor\n"
    "3. Numeros Primos\n"
    "4. Numeros Amigos\n"
    "5. Numero Capicua\n"
    "6. Palindromo\n"
    "7. A-no Bisiesto\n\n"
    "Digite la Opción ([s/S]-Salir)";
    
    do{
        printf(mainMenu);
        scanf("%c", &option);
        fflush(stdin);
        switch(option){
            case '1': calcFibonacci();
            break;
            
            case '2': calcMCM();
            break;
            
            case '3': calcCousin();
            break;
            
            case '4':
            break;
            
            case '5':
            break;
            
            case '6':
            break;
            
            case '7': 
            break;
        }
    }while(toupper(option)!='S');
}

int main(int argc, char** argv){
    
    mainMenu();
    
    return 0;
}

