#ifndef CONTABANCARIA
#define CONTABANCARIA
#include "cliente.h"
#include <iostream>

class ContaBancaria {
private:
    int numero;
    double saldo;
    Cliente titular;

public:
    ContaBancaria(int numero, Cliente titular, double saldo = 0.0);
    void depositar(double valor);
    void sacar(double valor);
    void transferir(double valor, ContaBancaria &alvo);
    void transferir(double valor, ContaBancaria &alvo1, ContaBancaria &alvo2);
    void exibirSaldo();
    void exibirInformacoes();
};
#endif