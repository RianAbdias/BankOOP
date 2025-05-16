#ifndef CLIENTE
#define CLIENTE
#include <string>

class Cliente {
private:
    std::string nome;
    std::string cpf;

public:
    Cliente(std::string nome, std::string cpf);
    std::string getNome();
    std::string getCpf();
};

#endif