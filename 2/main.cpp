#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{
    Endereco e1 = Endereco(44, "Maria Liosa Fernandes", "Jardim Oceania", "Paraiba", "João Pessoa", "58037-735");
    Endereco e2 = Endereco();

    e2.setNumero(1841);
    e2.setRua("Valdemar Galdino Naziazeno");
    e2.setBairro("Geisel");
    e2.setEstado("Paraiba");
    e2.setCidade("Joao Pessoa");
    e2.setCep("58075-000");

    Pessoa p1 = Pessoa("Lucas Bezerra", e1, "(83) 98730-3165");
    Pessoa p2 = Pessoa();

    p2.setNome("Lucas Oliveira");
    p2.setEndereco(e2);
    p2.setTelefone("(83) 99376-5789");

    cout << p1.toString() << endl;
    cout << p2.toString();

    return 0;
}
