//
//  Log.hpp
//  BMOAulasCpp15EnumInCpp
//
//  Created by Breno Medeiros on 06/06/21.
//

// As duas linhas abaixo(e tambem a linha "#endif" equivalem ao "Pragma Once" de headers .h
#ifndef Log_hpp     //Se ainda não definiu um simbolo chamado "Log_hpp" nesse projeto então
#define Log_hpp     // defina ele, e ele valerá tudo o que estiver escrito até a linha "#endif"

#include <iostream>
class Log{
public:

    enum Level {
        logDeLevelErro=0, logDeLevelAlerta, logDeLevelInformacao
    };
    // Como escrevemos o Enum acima, então é necessario comentar o codigo abaixo:
    /*const int logDeLevelErro = 0;
    const int logDeLevelAlerta = 1;
    const int logDeLevelInformacao = 2;*/

    //Como trocamos as declaracoes 'int' acima por um 'enum', entao o argumento do metodo abaixo tb sera trocado:
    void SetLevel(/* int */ Level level);

    void Erro(const char* mensagem);

    void Alerta(const char* mensagem);

    void Informacao(const char* mensagem);
    
private:
    //int m_logDeLevel = logDeLevelInformacao;
    //Como trocamos as declaracoes 'int' nessa classe por um 'enum', entao o argumento do metodo abaixo tb sera trocado:
    Level m_logDeLevel = logDeLevelInformacao;
};



#endif /* Log_hpp */




