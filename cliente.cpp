#include "cliente.h"

Cliente::Cliente(std::string nome, std::string cpf) : nome(nome), cpf(cpf) {}
std::string Cliente::getNome() {
    return nome;
}
std::string Cliente::getCpf() {
    return cpf;
}