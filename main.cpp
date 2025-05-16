#include <iostream>
#include <string>
#include "contabancaria.h"
#include "cliente.h"
using namespace std;

int main() {
    // Criando os clientes e suas contas
    Cliente cliente1("Ana", "111.111.111-11");
    Cliente cliente2("Bruno", "222.222.222-22");
    Cliente cliente3("Carla", "333.333.333-33");
    ContaBancaria conta1(1001, cliente1, 1000.0);
    ContaBancaria conta2(1002, cliente2);
    ContaBancaria conta3(1003, cliente3);

    // Mostra saldo inicial de Ana
    conta1.exibirSaldo();

    // Ana transferindo R$200 para Bruno
    conta1.transferir(200.0, conta2);

    // Ana transferindo R$300 para Bruno e Carla
    conta1.transferir(300.0, conta2, conta3);

    // Exibição dos saldos finais
    cout << endl;
    conta1.exibirInformacoes();
    conta2.exibirInformacoes();
    conta3.exibirInformacoes();

    return 0;
}