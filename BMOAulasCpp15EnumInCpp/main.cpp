//
//  main.cpp
//  BMOAulasCpp15EnumInCpp
//
//  Created by Breno Medeiros on 06/06/21.
//

#include <iostream>
#include "Log.hpp"


enum Exemplo:char {
    //A, B, C       //Deixando assim, por padrao, os valores serao "0, 1, 2" respectivamente por n terem sido especificados.
    //A=6, B, C     //De forma semelhante, assim ficarao a=6, B=7, C=8
    //A=0, B=2, C=6 //E assim é especificando cada valor individualmente
    A=5, B, C
};


int a=0;
int b=1;
int c=2;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //int valor=B;   //Essa é a forma mais 'desorganizada' de usar um dentre varios inteiros com significados
    Exemplo valor=B; //Essa é a forma mais 'organizada'(ou seja, usando enums) de fazer a mesma coisa
    // Obs: Repare que se na linha acima nos passarmos um valor inteiro que n esta no enum(como '9')dara 1 erro
    
    if (valor==B) {
        // insert code here...
        
    }
    
    Log log;
    //log.SetLevel(Log::logDeLevelAlerta);   //Caso não definamos(descomentemos), o level será '2'.
    log.Alerta("Hello!");
    
    log.Erro("Hello!");
    log.Informacao("Hello!");
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
