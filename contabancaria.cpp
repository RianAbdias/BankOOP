#include "contabancaria.h"
#include <iostream>
using namespace std;
    //construtor:
    ContaBancaria::ContaBancaria(int numero, Cliente titular, double saldo) 
        : numero(numero), titular(titular), saldo(saldo) {}

    //depósito:
    void ContaBancaria::depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            cout << "Depósito de R$ " << valor << " realizado na conta " << numero << endl;
        } else {
            cout << "Valor de depósito inválido!" << endl;
        }
    }
    //saque:
    void ContaBancaria::sacar(double valor) {
        if (valor > 0 && saldo >= valor) {
            saldo -= valor;
            cout << "Saque de R$ " << valor << " realizado da conta " << numero << endl;
        } else if (valor <= 0) {
            cout << "Valor de saque inválido!" << endl;
        } else {
            cout << "Saldo insuficiente na conta " << numero << endl;
        }
    }

    // Método para quando transferir para uma conta
    void ContaBancaria::transferir(double valor, ContaBancaria &alvo) {
        if (valor > 0 && saldo >= valor) {
            saldo -= valor;
            alvo.saldo += valor;
            cout << "Transferido: R$ " << valor << " da conta " << numero << " para a conta " << alvo.numero << endl;
        } else if (valor <= 0) {
            cout << "Valor de transferência inválido!" << endl;
        } else {
            cout << "Saldo insuficiente na conta " << numero << endl;
        }
    }
    // Método para quando transferir para duas contas 
    void ContaBancaria::transferir(double valor, ContaBancaria &alvo1, ContaBancaria &alvo2) {
        double valorDividido = valor / 2;
        if (valor > 0 && saldo >= valor) {
            saldo -= valor;
            alvo1.saldo += valorDividido;
            alvo2.saldo += valorDividido;
            cout << "Transferido: R$ " << valorDividido << " para cada conta (" 
                 << alvo1.numero << " e " << alvo2.numero << ") da conta " << numero << endl;
        } else if (valor <= 0) {
            cout << "Valor de transferência inválido!" << endl;
        } else {
            cout << "Saldo insuficiente na conta " << numero << endl;
        }
    }

    // Métodos para exibir:
    void ContaBancaria::exibirSaldo() {
        cout << "Saldo atual da conta " << numero << ": R$ " << saldo << endl;
    }

    void ContaBancaria::exibirInformacoes() {
        cout << "Titular: " << titular.getNome() << ", CPF: " << titular.getCpf() << endl;
        cout << "Número da Conta: " << numero << ", Saldo: R$ " << saldo << endl;
    }