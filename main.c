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
int isLeap(int year){
    if (year%4==0&&year%100!=0 ||year% 400==0) 
        return 1;
}

int isCousing( int n ){
    int cont = 2;
    int cousing = 1;
    while( cont <= n / 2 && cousing ){
        cousing = !( n % cont++ == 0 );
    }
    return cousing;
}

void proccessCousin( int n){
    int cont;
    for ( cont = n; cont >= 1 ; cont-- ){
        if( isCousing( cont ) ){
            printf("%d\t",cont);
        }
    }
    printf("\n");
}

int calculateMCD(int less, int higher){
 if (higher%less==0) 
        return less;
    return calculateMCD(higher%less, less);
}

int calculateFibonacci(int number){
  if (number==1||number==2){
        return 1;
    }else{
        return calculateFibonacci(number-1)+calculateFibonacci(number-2);
   }
}

void calcLeap(){
    int year;
    printf("Calcular si un año es bisiesto\nENTER para continuar\n");
    printf("Digite el a-no\n");
    scanf("%d", &year);
    if (isLeap(year)==1) {
        printf("El año %d es bisiesto", year);
    }else{
        printf("El año %d No es bisiesto", year);
    }

    getchar();
}

void calcCousin(){
    int number;
    printf("Calcular números Primos\nENTER para continuar\n");
    printf("Digite Valor.. ");
    scanf("%d",&number);
    printf("Los numeros primos de acuerdo a valor: %d, son :\n", number);
    proccessCousin( number);
    getchar();
}

void calcMCM(){
    int valOne, valTwo;
    printf("Calcular Maximo Comun Divisor\nENTER para continuar\n");
    printf("Digite los numeros\n");
    scanf("%d %d", &valOne, &valTwo);
    printf("El MCM de %d y %d es %d\n",valOne, valTwo,calculateMCD( valOne<valTwo?valOne:valTwo, valOne>valTwo?valOne:valTwo));
   
    getchar();
} 


void calcFibonacci(){
    int number;
    printf("Calcular termino de la serie Fibonacci\nENTER para Continuar\n");
    printf("Digite el n-esimo termino\n");
    scanf("%d", &number);

    printf("N-esimo termino (%d) es --> %d",number,calculateFibonacci(number));

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
            case '1' : calcFibonacci();
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
            
            case '7':calcLeap();
            break;
        }
    }while(toupper(option)!='S');
}

int main(int argc, char** argv){
    
    mainMenu();
    
    return 0;
}

