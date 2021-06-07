//
//  Log.cpp
//  BMOAulasCpp15EnumInCpp
//
//  Created by Breno Medeiros on 06/06/21.
//

#include "Log.hpp"

//Como trocamos as declaracoes 'int' no Log.hpp por um 'enum', entao o argumento do metodo abaixo tb sera trocado:
void Log::SetLevel(/* int */ Level level){
    m_logDeLevel = level;
}

void Log::Erro(const char* mensagem){
    if (m_logDeLevel >= logDeLevelErro) {
        std::cout << "[ERRO]: " << mensagem << std::endl;
    }
}

void Log::Alerta(const char* mensagem){
    if (m_logDeLevel >= logDeLevelAlerta) {
        std::cout << "[ALERTA]: " << mensagem << std::endl;
    }
}

void Log::Informacao(const char* mensagem){
    if (m_logDeLevel >= logDeLevelInformacao) {
        std::cout << "[INFORMAÇÃO]: " << mensagem << std::endl;
    }
}

