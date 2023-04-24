#include <iostream>
#include <string>

using namespace std;

class Pessoa {
private:
string nome;
int idade;

public:
Pessoa(string n, int i) {
nome = n;
idade = i;
}

string getNome() {
    return nome;
}

int getIdade() {
    return idade;
}
};

int main() {
string nome;
int idade;

cin >> nome;
cin >> idade;

Pessoa p(nome, idade);

cout << "Nome: " << p.getNome() << ", Idade: " << p.getIdade() << endl;

return 0;
}
